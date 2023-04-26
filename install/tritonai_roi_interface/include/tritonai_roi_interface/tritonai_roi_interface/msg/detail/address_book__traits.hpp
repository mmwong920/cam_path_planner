// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tritonai_roi_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice

#ifndef TRITONAI_ROI_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_
#define TRITONAI_ROI_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tritonai_roi_interface/msg/detail/address_book__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tritonai_roi_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const AddressBook & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_list
  {
    if (msg.x_list.size() == 0) {
      out << "x_list: []";
    } else {
      out << "x_list: [";
      size_t pending_items = msg.x_list.size();
      for (auto item : msg.x_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y_list
  {
    if (msg.y_list.size() == 0) {
      out << "y_list: []";
    } else {
      out << "y_list: [";
      size_t pending_items = msg.y_list.size();
      for (auto item : msg.y_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: z_list
  {
    if (msg.z_list.size() == 0) {
      out << "z_list: []";
    } else {
      out << "z_list: [";
      size_t pending_items = msg.z_list.size();
      for (auto item : msg.z_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: class_list
  {
    if (msg.class_list.size() == 0) {
      out << "class_list: []";
    } else {
      out << "class_list: [";
      size_t pending_items = msg.class_list.size();
      for (auto item : msg.class_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddressBook & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x_list.size() == 0) {
      out << "x_list: []\n";
    } else {
      out << "x_list:\n";
      for (auto item : msg.x_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y_list.size() == 0) {
      out << "y_list: []\n";
    } else {
      out << "y_list:\n";
      for (auto item : msg.y_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: z_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.z_list.size() == 0) {
      out << "z_list: []\n";
    } else {
      out << "z_list:\n";
      for (auto item : msg.z_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: class_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.class_list.size() == 0) {
      out << "class_list: []\n";
    } else {
      out << "class_list:\n";
      for (auto item : msg.class_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddressBook & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tritonai_roi_interface

namespace rosidl_generator_traits
{

[[deprecated("use tritonai_roi_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tritonai_roi_interface::msg::AddressBook & msg,
  std::ostream & out, size_t indentation = 0)
{
  tritonai_roi_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tritonai_roi_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const tritonai_roi_interface::msg::AddressBook & msg)
{
  return tritonai_roi_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tritonai_roi_interface::msg::AddressBook>()
{
  return "tritonai_roi_interface::msg::AddressBook";
}

template<>
inline const char * name<tritonai_roi_interface::msg::AddressBook>()
{
  return "tritonai_roi_interface/msg/AddressBook";
}

template<>
struct has_fixed_size<tritonai_roi_interface::msg::AddressBook>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tritonai_roi_interface::msg::AddressBook>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tritonai_roi_interface::msg::AddressBook>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRITONAI_ROI_INTERFACE__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_
