// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tritonai_roi_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tritonai_roi_interface/msg/detail/address_book__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tritonai_roi_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AddressBook_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tritonai_roi_interface::msg::AddressBook(_init);
}

void AddressBook_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tritonai_roi_interface::msg::AddressBook *>(message_memory);
  typed_message->~AddressBook();
}

size_t size_function__AddressBook__x_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AddressBook__x_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__AddressBook__x_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__AddressBook__x_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AddressBook__x_list(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AddressBook__x_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AddressBook__x_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__AddressBook__x_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AddressBook__y_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AddressBook__y_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__AddressBook__y_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__AddressBook__y_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AddressBook__y_list(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AddressBook__y_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AddressBook__y_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__AddressBook__y_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AddressBook__z_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AddressBook__z_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__AddressBook__z_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__AddressBook__z_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AddressBook__z_list(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AddressBook__z_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AddressBook__z_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__AddressBook__z_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AddressBook__class_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AddressBook__class_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AddressBook__class_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AddressBook__class_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__AddressBook__class_list(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__AddressBook__class_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__AddressBook__class_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__AddressBook__class_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AddressBook_message_member_array[4] = {
  {
    "x_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tritonai_roi_interface::msg::AddressBook, x_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__AddressBook__x_list,  // size() function pointer
    get_const_function__AddressBook__x_list,  // get_const(index) function pointer
    get_function__AddressBook__x_list,  // get(index) function pointer
    fetch_function__AddressBook__x_list,  // fetch(index, &value) function pointer
    assign_function__AddressBook__x_list,  // assign(index, value) function pointer
    resize_function__AddressBook__x_list  // resize(index) function pointer
  },
  {
    "y_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tritonai_roi_interface::msg::AddressBook, y_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__AddressBook__y_list,  // size() function pointer
    get_const_function__AddressBook__y_list,  // get_const(index) function pointer
    get_function__AddressBook__y_list,  // get(index) function pointer
    fetch_function__AddressBook__y_list,  // fetch(index, &value) function pointer
    assign_function__AddressBook__y_list,  // assign(index, value) function pointer
    resize_function__AddressBook__y_list  // resize(index) function pointer
  },
  {
    "z_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tritonai_roi_interface::msg::AddressBook, z_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__AddressBook__z_list,  // size() function pointer
    get_const_function__AddressBook__z_list,  // get_const(index) function pointer
    get_function__AddressBook__z_list,  // get(index) function pointer
    fetch_function__AddressBook__z_list,  // fetch(index, &value) function pointer
    assign_function__AddressBook__z_list,  // assign(index, value) function pointer
    resize_function__AddressBook__z_list  // resize(index) function pointer
  },
  {
    "class_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tritonai_roi_interface::msg::AddressBook, class_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__AddressBook__class_list,  // size() function pointer
    get_const_function__AddressBook__class_list,  // get_const(index) function pointer
    get_function__AddressBook__class_list,  // get(index) function pointer
    fetch_function__AddressBook__class_list,  // fetch(index, &value) function pointer
    assign_function__AddressBook__class_list,  // assign(index, value) function pointer
    resize_function__AddressBook__class_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AddressBook_message_members = {
  "tritonai_roi_interface::msg",  // message namespace
  "AddressBook",  // message name
  4,  // number of fields
  sizeof(tritonai_roi_interface::msg::AddressBook),
  AddressBook_message_member_array,  // message members
  AddressBook_init_function,  // function to initialize message memory (memory has to be allocated)
  AddressBook_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AddressBook_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AddressBook_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tritonai_roi_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tritonai_roi_interface::msg::AddressBook>()
{
  return &::tritonai_roi_interface::msg::rosidl_typesupport_introspection_cpp::AddressBook_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tritonai_roi_interface, msg, AddressBook)() {
  return &::tritonai_roi_interface::msg::rosidl_typesupport_introspection_cpp::AddressBook_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
