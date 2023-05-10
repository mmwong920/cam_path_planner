# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

import torch
import cv2
import depthai as dai
import numpy as np
import transforms3d

from .calc import HostSpatialsCalc
from .utility import *

import json
from pathlib import Path
import math


class ObjectDetectionPublisher(Node):

    def __init__(self):
        super().__init__('object_detection_publisher')
        self.publisher_box = self.create_publisher(String, 'box_xyz', 10)
        self.publisher_cone = self.create_publisher(String, 'cone_xyz', 10)
        self.camRes = dai.ColorCameraProperties.SensorResolution.THE_800_P
        self.camSocket = dai.CameraBoardSocket.RGB
        self.ispScale = (1,2)
        self.camera_model()


    def getMesh(self, calibData, ispSize):
        M1 = np.array(calibData.getCameraIntrinsics(self.camSocket, ispSize[0], ispSize[1]))
        d1 = np.array(calibData.getDistortionCoefficients(self.camSocket))
        print(d1)

        # M1 = np.array([
        #     [576.7072143554688, 0.0, 632.15673828125],
        #     [0.0, 576.8490600585938, 401.6389465332031],
        #     [0.0, 0.0, 1.0]
        # ])

        R1 = np.identity(3)
        mapX, mapY = cv2.initUndistortRectifyMap(M1, d1, R1, M1, ispSize, cv2.CV_32FC1)

        meshCellSize = 16
        mesh0 = []
        # Creates subsampled mesh which will be loaded on to device to undistort the image
        for y in range(mapX.shape[0] + 1): # iterating over height of the image
            if y % meshCellSize == 0:
                rowLeft = []
                for x in range(mapX.shape[1]): # iterating over width of the image
                    if x % meshCellSize == 0:
                        if y == mapX.shape[0] and x == mapX.shape[1]:
                            rowLeft.append(mapX[y - 1, x - 1])
                            rowLeft.append(mapY[y - 1, x - 1])
                        elif y == mapX.shape[0]:
                            rowLeft.append(mapX[y - 1, x])
                            rowLeft.append(mapY[y - 1, x])
                        elif x == mapX.shape[1]:
                            rowLeft.append(mapX[y, x - 1])
                            rowLeft.append(mapY[y, x - 1])
                        else:
                            rowLeft.append(mapX[y, x])
                            rowLeft.append(mapY[y, x])
                if (mapX.shape[1] % meshCellSize) % 2 != 0:
                    rowLeft.append(0)
                    rowLeft.append(0)

                mesh0.append(rowLeft)

        mesh0 = np.array(mesh0)
        meshWidth = mesh0.shape[1] // 2
        meshHeight = mesh0.shape[0]
        mesh0.resize(meshWidth * meshHeight, 2)
        mesh = list(map(tuple, mesh0))

        return mesh, meshWidth, meshHeight


    def create_pipeline(self, calibData):
        # Create pipeline
        pipeline = dai.Pipeline()


        cam = pipeline.create(dai.node.ColorCamera)
        cam.setIspScale(self.ispScale)
        cam.setBoardSocket(self.camSocket)
        cam.setResolution(self.camRes)
        cam.setResolution(dai.ColorCameraProperties.SensorResolution.THE_800_P)
        cam.setInterleaved(False)
        cam.setColorOrder(dai.ColorCameraProperties.ColorOrder.BGR)

        manip = pipeline.create(dai.node.ImageManip)
        mesh, meshWidth, meshHeight = self.getMesh(calibData, cam.getIspSize())
        manip.setWarpMesh(mesh, meshWidth, meshHeight)
        manip.setMaxOutputFrameSize(cam.getIspWidth() * cam.getIspHeight() * 3 // 2)
        cam.isp.link(manip.inputImage)

        cam_xout = pipeline.create(dai.node.XLinkOut)
        cam_xout.setStreamName("rgb")
        manip.out.link(cam_xout.input)

        # dist_xout = pipeline.create(dai.node.XLinkOut)
        # dist_xout.setStreamName("Distorted")
        # cam.isp.link(dist_xout.input)
        # cam.ispsetPreviewSize(256, 160)

        return pipeline



    def depth_roi_callback(self, heading_angle, x:list,y:list,z:list,class_name):
        pub_msg = String()
        msg = dict()
        if class_name == "cone":
            msg['heading_angle'] = heading_angle
            msg['x_list'] = x
            msg['y_list'] = y
            msg['z_list'] = z
            msg['class_list'] = [0 for i in range(len(x))]
            pub_msg.data = json.dumps(msg)
            self.publisher_cone.publish(pub_msg)
            print("msg published",json.dumps(msg))
        elif class_name == "obstacle":
            msg['heading_angle'] = heading_angle
            msg['x_list'] = x
            msg['y_list'] = y
            msg['z_list'] = z
            msg['class_list'] = [1 for i in range(len(x))]
            pub_msg.data = json.dumps(msg)
            self.publisher_box.publish(pub_msg)
            print("msg published",json.dumps(msg))


    def camera_model(self):
        '''
        Performs inference on RGB camera frame and calculates spatial location coordinates: x,y,z relative to the center of depth map.
        '''
        
        with dai.Device() as device:
            model = torch.hub.load('/home/triton-ai/.cache/torch/hub/ultralytics_yolov5_master', 'custom', path=str((Path(__file__).parent / Path('../models/box_cone_v10/Custom_Object_Detection_using_YOLOv5_512.pt')).resolve().absolute()), source='local', force_reload=True)
            model.conf = 0.5  # NMS confidence threshold
            model.iou = 0.5  # NMS IoU threshold
            # model.agnostic = False  # NMS class-agnostic
            # model.multi_label = False  # NMS multiple labels per box
            # model.classes = None  # (optional list) filter by class, i.e. = [0, 15, 16] for COCO persons, cats and dogs
            model.max_det = 20  # maximum number of detections per image
            # model.amp = False  # Automatic Mixed Precision (AMP) inference
            color = (255, 255, 255)

            # Closer-in minimum depth, disparity range is doubled (from 95 to 190):
            extended_disparity = True
            # Better accuracy for longer distance, fractional disparity 32-levels:
            subpixel = True
            # Better handling for occlusions:
            lr_check = True

            calibData = device.readCalibration()
            pipeline = self.create_pipeline(calibData)


            #IMU
            imu = pipeline.create(dai.node.IMU)
            xlinkOut = pipeline.create(dai.node.XLinkOut)
            xlinkOut.setStreamName("imu")
            # enable ROTATION_VECTOR at 400 hz rate
            imu.enableIMUSensor(dai.IMUSensor.ROTATION_VECTOR, 100)
            # it's recommended to set both setBatchReportThreshold and setMaxBatchReports to 20 when integrating in a pipeline with a lot of input/output connections
            # above this threshold packets will be sent in batch of X, if the host is not blocked and USB bandwidth is available
            imu.setBatchReportThreshold(1)
            # maximum number of IMU packets in a batch, if it's reached device will block sending until host can receive it
            # if lower or equal to batchReportThreshold then the sending is always blocking on device
            # useful to reduce device's CPU load  and number of lost packets, if CPU load is high on device side due to multiple nodes
            imu.setMaxBatchReports(10)
            # Link plugins IMU -> XLINK
            imu.out.link(xlinkOut.input)

            # Define sources and outputs

            # camRgb = pipeline.create(dai.node.ColorCamera)
            monoLeft = pipeline.create(dai.node.MonoCamera)
            monoRight = pipeline.create(dai.node.MonoCamera)
            stereo = pipeline.create(dai.node.StereoDepth)

            # # Properties
            monoLeft.setResolution(dai.MonoCameraProperties.SensorResolution.THE_400_P)
            monoLeft.setBoardSocket(dai.CameraBoardSocket.LEFT)
            monoRight.setResolution(dai.MonoCameraProperties.SensorResolution.THE_400_P)
            monoRight.setBoardSocket(dai.CameraBoardSocket.RIGHT)

            stereo.initialConfig.setConfidenceThreshold(255)
            stereo.setLeftRightCheck(True)
            stereo.setSubpixel(False)
            stereo.setLeftRightCheck(lr_check)
            stereo.setExtendedDisparity(extended_disparity)
            stereo.setSubpixel(subpixel)

            # Linking
            monoLeft.out.link(stereo.left)
            monoRight.out.link(stereo.right)
            
            xoutDepth = pipeline.create(dai.node.XLinkOut)
            xoutDepth.setStreamName("depth")
            stereo.depth.link(xoutDepth.input)
            
            
            xoutDisparity = pipeline.create(dai.node.XLinkOut)
            xoutDisparity.setStreamName("disparity")
            stereo.disparity.link(xoutDisparity.input)

            device.startPipeline(pipeline)

            # Output queue will be used to get the depth frames from the outputs defined above
            depthQueue = device.getOutputQueue(name="depth")
            disparityQ = device.getOutputQueue(name="disparity")

            text = TextHelper()
            hostSpatials = HostSpatialsCalc(device)
            
            print('Connected cameras:', device.getConnectedCameraFeatures())
            # Print out usb speed
            print('Usb speed:', device.getUsbSpeed().name)
            # Bootloader version
            if device.getBootloaderVersion() is not None:
                print('Bootloader version:', device.getBootloaderVersion())
            # Device name
            print('Device name:', device.getDeviceName())

            # Output queue will be used to get the rgb frames from the output defined above
            qRgb = device.getOutputQueue(name="rgb", maxSize=4, blocking=False)
            
            imuQueue = device.getOutputQueue(name="imu", maxSize=50, blocking=False)
            base_yaw = None
            del_yaw = 0

            diffs = np.array([])
            
            while True:

                imuData = imuQueue.get()  # blocking call, will wait until a new data has arrived
                imuPackets = imuData.packets
                for imuPacket in imuPackets:
                    rVvalues = imuPacket.rotationVector
                    # rvTs = rVvalues.getTimestampDevice()
                    # if baseTs is None:
                    #     baseTs = rvTs
                    # rvTs = rvTs - baseTs
                    # imuF = "{:.06f}"
                    # tsF  = "{:.03f}"
                    yaw = transforms3d.euler.quat2euler([rVvalues.real,rVvalues.i,rVvalues.j,rVvalues.k])[2]
                    if base_yaw is None:
                        base_yaw = yaw
                    del_yaw = yaw-base_yaw
                    del_yaw = np.arctan2(np.sin(del_yaw),np.cos(del_yaw))

                inRgb = qRgb.get()  # blocking call, will wait until a new data has arrived
                
                # Inference
                frame = inRgb.getCvFrame()
                results = model(frame[:, :, ::-1])  # includes NMS
                
                depthData = depthQueue.get()
                # Get disparity frame for nicer depth visualization
                disparity = disparityQ.get().getFrame()
                disparity = (disparity * (255 / stereo.initialConfig.getMaxDisparity())).astype(np.uint8)
                disparity = cv2.applyColorMap(disparity, cv2.COLORMAP_JET)

                cone_x = []
                cone_y = []
                cone_z = []
                box_x = []
                box_y = []
                box_z = []
                x1,y1,x2,y2 = (0,0,0,0)
                x = 0
                y = 0
                spa_x = float('nan')
                spa_y = float('nan')
                spa_z = float('nan')
                for xyxy in results.xyxy[0]:
                    # print(xyxy)
                    try:
                        x1 = int(xyxy[0])
                        y1 = int(xyxy[1])
                        x2 = int(xyxy[2])
                        y2 = int(xyxy[3])
                        conf = float(xyxy[4])*100
                        label = ['cone','obstacle'][int(xyxy[5])]
                        spatials, centroid = hostSpatials.calc_spatials(depthData, (x1,y1,x2,y2)) # roi --> mean spacial & centroid
                        x = centroid["x"]
                        y = centroid["y"]
                        spa_x = np.round(spatials['x'], 2)
                        spa_y = np.round(spatials['y'], 2)
                        spa_z = np.round(spatials['z'], 2)
                        if label == "cone":
                            cone_x.append(spa_x)
                            cone_y.append(spa_y)
                            cone_z.append(spa_z)
                        if label == "obstacle":
                            box_x.append(spa_x)
                            box_y.append(spa_y)
                            box_z.append(spa_z)
                    except Exception as e:
                        print(e)
                        continue
                    
                    text.rectangle(disparity, (int(x1), int(y1)), (int(x2), int(y2)))
                    
                    text.putText(disparity, "X: " + ("{:.1f}m".format(spa_x/1000) if not math.isnan(spa_x) else "--"), (x + 10, y + 20))
                    text.putText(disparity, "Y: " + ("{:.1f}m".format(spa_y/1000) if not math.isnan(spa_y) else "--"), (x + 10, y + 35))
                    text.putText(disparity, "Z: " + ("{:.1f}m".format(spa_z/1000) if not math.isnan(spa_z) else "--"), (x + 10, y + 50))

                    cv2.putText(frame, str(label), (x1 + 10, y1 + 20), cv2.FONT_HERSHEY_TRIPLEX, 0.5, 255)
                    cv2.putText(frame, "{:.2f}".format(conf), (x1 + 10, y1 + 35), cv2.FONT_HERSHEY_TRIPLEX, 0.5, 255)
                    cv2.putText(frame, f"X: {spa_x} mm", (x1 + 10, y1 + 50), cv2.FONT_HERSHEY_TRIPLEX, 0.5, 255)
                    cv2.putText(frame, f"Y: {spa_y} mm", (x1 + 10, y1 + 65), cv2.FONT_HERSHEY_TRIPLEX, 0.5, 255)
                    cv2.putText(frame, f"Z: {spa_z} mm", (x1 + 10, y1 + 80), cv2.FONT_HERSHEY_TRIPLEX, 0.5, 255)
                    
                    cv2.rectangle(frame, (int(x1), int(y1)), (int(x2), int(y2)), color, 2)

                # Show the frame
                cv2.imshow("depth", disparity)
                cv2.imshow("tracker", frame)

                latencyMs = (dai.Clock.now() - inRgb.getTimestamp()).total_seconds() * 1000
                diffs = np.append(diffs, latencyMs)
                # print('Latency: {:.2f} ms, Average latency: {:.2f} ms, Std: {:.2f}'.format(latencyMs, np.average(diffs), np.std(diffs)))

                if len(cone_x) != 0:
                    self.depth_roi_callback(del_yaw, cone_x,cone_y,cone_z,"cone")
                if len(box_x) != 0:
                    self.depth_roi_callback(del_yaw, box_x,box_y,box_z,"obstacle")

                if cv2.waitKey(1) == ord('q'):
                    break



def main(args=None):
    rclpy.init(args=args)

    obj_det_publisher = ObjectDetectionPublisher()
    rclpy.spin(obj_det_publisher)

    obj_det_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
