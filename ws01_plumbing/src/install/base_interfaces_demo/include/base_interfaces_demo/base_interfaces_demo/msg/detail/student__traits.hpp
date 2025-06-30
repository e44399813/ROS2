// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces_demo:msg/Student.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces_demo/msg/student.hpp"


#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__STUDENT__TRAITS_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__STUDENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_interfaces_demo/msg/detail/student__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfaces_demo
{

namespace msg
{

inline void to_flow_style_yaml(
  const Student & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Student & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Student & msg, bool use_flow_style = false)
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

}  // namespace base_interfaces_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces_demo::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces_demo::msg::Student & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces_demo::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces_demo::msg::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces_demo::msg::Student & msg)
{
  return base_interfaces_demo::msg::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces_demo::msg::Student>()
{
  return "base_interfaces_demo::msg::Student";
}

template<>
inline const char * name<base_interfaces_demo::msg::Student>()
{
  return "base_interfaces_demo/msg/Student";
}

template<>
struct has_fixed_size<base_interfaces_demo::msg::Student>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfaces_demo::msg::Student>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<base_interfaces_demo::msg::Student>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__STUDENT__TRAITS_HPP_
