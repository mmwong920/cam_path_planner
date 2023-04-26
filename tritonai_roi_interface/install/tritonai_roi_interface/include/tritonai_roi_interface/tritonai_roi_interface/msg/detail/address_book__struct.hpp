// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tritonai_roi_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice

#ifndef TRITONAI_ROI_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__STRUCT_HPP_
#define TRITONAI_ROI_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tritonai_roi_interface__msg__AddressBook __attribute__((deprecated))
#else
# define DEPRECATED__tritonai_roi_interface__msg__AddressBook __declspec(deprecated)
#endif

namespace tritonai_roi_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AddressBook_
{
  using Type = AddressBook_<ContainerAllocator>;

  explicit AddressBook_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AddressBook_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_list_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_list_type x_list;
  using _y_list_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _y_list_type y_list;
  using _z_list_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _z_list_type z_list;
  using _class_list_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _class_list_type class_list;

  // setters for named parameter idiom
  Type & set__x_list(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x_list = _arg;
    return *this;
  }
  Type & set__y_list(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->y_list = _arg;
    return *this;
  }
  Type & set__z_list(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->z_list = _arg;
    return *this;
  }
  Type & set__class_list(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->class_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tritonai_roi_interface::msg::AddressBook_<ContainerAllocator> *;
  using ConstRawPtr =
    const tritonai_roi_interface::msg::AddressBook_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tritonai_roi_interface::msg::AddressBook_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tritonai_roi_interface::msg::AddressBook_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tritonai_roi_interface::msg::AddressBook_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tritonai_roi_interface::msg::AddressBook_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tritonai_roi_interface::msg::AddressBook_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tritonai_roi_interface::msg::AddressBook_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tritonai_roi_interface::msg::AddressBook_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tritonai_roi_interface::msg::AddressBook_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tritonai_roi_interface__msg__AddressBook
    std::shared_ptr<tritonai_roi_interface::msg::AddressBook_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tritonai_roi_interface__msg__AddressBook
    std::shared_ptr<tritonai_roi_interface::msg::AddressBook_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddressBook_ & other) const
  {
    if (this->x_list != other.x_list) {
      return false;
    }
    if (this->y_list != other.y_list) {
      return false;
    }
    if (this->z_list != other.z_list) {
      return false;
    }
    if (this->class_list != other.class_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddressBook_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddressBook_

// alias to use template instance with default allocator
using AddressBook =
  tritonai_roi_interface::msg::AddressBook_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tritonai_roi_interface

#endif  // TRITONAI_ROI_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__STRUCT_HPP_
