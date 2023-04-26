// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tritonai_roi_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice

#ifndef TRITONAI_ROI_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__STRUCT_H_
#define TRITONAI_ROI_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x_list'
// Member 'y_list'
// Member 'z_list'
// Member 'class_list'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AddressBook in the package tritonai_roi_interface.
/**
  * list of relative position of ROIs
 */
typedef struct tritonai_roi_interface__msg__AddressBook
{
  rosidl_runtime_c__float__Sequence x_list;
  rosidl_runtime_c__float__Sequence y_list;
  rosidl_runtime_c__float__Sequence z_list;
  /// list of ROIs classes
  rosidl_runtime_c__int8__Sequence class_list;
} tritonai_roi_interface__msg__AddressBook;

// Struct for a sequence of tritonai_roi_interface__msg__AddressBook.
typedef struct tritonai_roi_interface__msg__AddressBook__Sequence
{
  tritonai_roi_interface__msg__AddressBook * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tritonai_roi_interface__msg__AddressBook__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRITONAI_ROI_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__STRUCT_H_
