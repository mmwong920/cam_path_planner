// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tritonai_roi_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tritonai_roi_interface/msg/detail/address_book__rosidl_typesupport_introspection_c.h"
#include "tritonai_roi_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tritonai_roi_interface/msg/detail/address_book__functions.h"
#include "tritonai_roi_interface/msg/detail/address_book__struct.h"


// Include directives for member types
// Member `x_list`
// Member `y_list`
// Member `z_list`
// Member `class_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tritonai_roi_interface__msg__AddressBook__init(message_memory);
}

void tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_fini_function(void * message_memory)
{
  tritonai_roi_interface__msg__AddressBook__fini(message_memory);
}

size_t tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__size_function__AddressBook__x_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_const_function__AddressBook__x_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_function__AddressBook__x_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__fetch_function__AddressBook__x_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_const_function__AddressBook__x_list(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__assign_function__AddressBook__x_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_function__AddressBook__x_list(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__resize_function__AddressBook__x_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__size_function__AddressBook__y_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_const_function__AddressBook__y_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_function__AddressBook__y_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__fetch_function__AddressBook__y_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_const_function__AddressBook__y_list(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__assign_function__AddressBook__y_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_function__AddressBook__y_list(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__resize_function__AddressBook__y_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__size_function__AddressBook__z_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_const_function__AddressBook__z_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_function__AddressBook__z_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__fetch_function__AddressBook__z_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_const_function__AddressBook__z_list(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__assign_function__AddressBook__z_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_function__AddressBook__z_list(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__resize_function__AddressBook__z_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__size_function__AddressBook__class_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_const_function__AddressBook__class_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_function__AddressBook__class_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__fetch_function__AddressBook__class_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_const_function__AddressBook__class_list(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__assign_function__AddressBook__class_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_function__AddressBook__class_list(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__resize_function__AddressBook__class_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_member_array[4] = {
  {
    "x_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tritonai_roi_interface__msg__AddressBook, x_list),  // bytes offset in struct
    NULL,  // default value
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__size_function__AddressBook__x_list,  // size() function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_const_function__AddressBook__x_list,  // get_const(index) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_function__AddressBook__x_list,  // get(index) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__fetch_function__AddressBook__x_list,  // fetch(index, &value) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__assign_function__AddressBook__x_list,  // assign(index, value) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__resize_function__AddressBook__x_list  // resize(index) function pointer
  },
  {
    "y_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tritonai_roi_interface__msg__AddressBook, y_list),  // bytes offset in struct
    NULL,  // default value
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__size_function__AddressBook__y_list,  // size() function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_const_function__AddressBook__y_list,  // get_const(index) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_function__AddressBook__y_list,  // get(index) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__fetch_function__AddressBook__y_list,  // fetch(index, &value) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__assign_function__AddressBook__y_list,  // assign(index, value) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__resize_function__AddressBook__y_list  // resize(index) function pointer
  },
  {
    "z_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tritonai_roi_interface__msg__AddressBook, z_list),  // bytes offset in struct
    NULL,  // default value
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__size_function__AddressBook__z_list,  // size() function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_const_function__AddressBook__z_list,  // get_const(index) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_function__AddressBook__z_list,  // get(index) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__fetch_function__AddressBook__z_list,  // fetch(index, &value) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__assign_function__AddressBook__z_list,  // assign(index, value) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__resize_function__AddressBook__z_list  // resize(index) function pointer
  },
  {
    "class_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tritonai_roi_interface__msg__AddressBook, class_list),  // bytes offset in struct
    NULL,  // default value
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__size_function__AddressBook__class_list,  // size() function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_const_function__AddressBook__class_list,  // get_const(index) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__get_function__AddressBook__class_list,  // get(index) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__fetch_function__AddressBook__class_list,  // fetch(index, &value) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__assign_function__AddressBook__class_list,  // assign(index, value) function pointer
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__resize_function__AddressBook__class_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_members = {
  "tritonai_roi_interface__msg",  // message namespace
  "AddressBook",  // message name
  4,  // number of fields
  sizeof(tritonai_roi_interface__msg__AddressBook),
  tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_member_array,  // message members
  tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_init_function,  // function to initialize message memory (memory has to be allocated)
  tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_type_support_handle = {
  0,
  &tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tritonai_roi_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tritonai_roi_interface, msg, AddressBook)() {
  if (!tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_type_support_handle.typesupport_identifier) {
    tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tritonai_roi_interface__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
