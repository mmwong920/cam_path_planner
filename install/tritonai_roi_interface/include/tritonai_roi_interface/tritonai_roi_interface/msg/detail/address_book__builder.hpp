// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tritonai_roi_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice

#ifndef TRITONAI_ROI_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_
#define TRITONAI_ROI_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tritonai_roi_interface/msg/detail/address_book__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tritonai_roi_interface
{

namespace msg
{

namespace builder
{

class Init_AddressBook_class_list
{
public:
  explicit Init_AddressBook_class_list(::tritonai_roi_interface::msg::AddressBook & msg)
  : msg_(msg)
  {}
  ::tritonai_roi_interface::msg::AddressBook class_list(::tritonai_roi_interface::msg::AddressBook::_class_list_type arg)
  {
    msg_.class_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tritonai_roi_interface::msg::AddressBook msg_;
};

class Init_AddressBook_z_list
{
public:
  explicit Init_AddressBook_z_list(::tritonai_roi_interface::msg::AddressBook & msg)
  : msg_(msg)
  {}
  Init_AddressBook_class_list z_list(::tritonai_roi_interface::msg::AddressBook::_z_list_type arg)
  {
    msg_.z_list = std::move(arg);
    return Init_AddressBook_class_list(msg_);
  }

private:
  ::tritonai_roi_interface::msg::AddressBook msg_;
};

class Init_AddressBook_y_list
{
public:
  explicit Init_AddressBook_y_list(::tritonai_roi_interface::msg::AddressBook & msg)
  : msg_(msg)
  {}
  Init_AddressBook_z_list y_list(::tritonai_roi_interface::msg::AddressBook::_y_list_type arg)
  {
    msg_.y_list = std::move(arg);
    return Init_AddressBook_z_list(msg_);
  }

private:
  ::tritonai_roi_interface::msg::AddressBook msg_;
};

class Init_AddressBook_x_list
{
public:
  Init_AddressBook_x_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddressBook_y_list x_list(::tritonai_roi_interface::msg::AddressBook::_x_list_type arg)
  {
    msg_.x_list = std::move(arg);
    return Init_AddressBook_y_list(msg_);
  }

private:
  ::tritonai_roi_interface::msg::AddressBook msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tritonai_roi_interface::msg::AddressBook>()
{
  return tritonai_roi_interface::msg::builder::Init_AddressBook_x_list();
}

}  // namespace tritonai_roi_interface

#endif  // TRITONAI_ROI_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_
