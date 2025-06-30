// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces_demo:srv/AddInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces_demo/srv/add_ints.hpp"


#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__ADD_INTS__TRAITS_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__ADD_INTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_interfaces_demo/srv/detail/add_ints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfaces_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddInts_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: num1
  {
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << ", ";
  }

  // member: num2
  {
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << "\n";
  }

  // member: num2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddInts_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_interfaces_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces_demo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces_demo::srv::AddInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces_demo::srv::AddInts_Request & msg)
{
  return base_interfaces_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces_demo::srv::AddInts_Request>()
{
  return "base_interfaces_demo::srv::AddInts_Request";
}

template<>
inline const char * name<base_interfaces_demo::srv::AddInts_Request>()
{
  return "base_interfaces_demo/srv/AddInts_Request";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::AddInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::srv::AddInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::srv::AddInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace base_interfaces_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddInts_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddInts_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_interfaces_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces_demo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces_demo::srv::AddInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces_demo::srv::AddInts_Response & msg)
{
  return base_interfaces_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces_demo::srv::AddInts_Response>()
{
  return "base_interfaces_demo::srv::AddInts_Response";
}

template<>
inline const char * name<base_interfaces_demo::srv::AddInts_Response>()
{
  return "base_interfaces_demo/srv/AddInts_Response";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::AddInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<base_interfaces_demo::srv::AddInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<base_interfaces_demo::srv::AddInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace base_interfaces_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddInts_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const AddInts_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddInts_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_interfaces_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces_demo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces_demo::srv::AddInts_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces_demo::srv::AddInts_Event & msg)
{
  return base_interfaces_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces_demo::srv::AddInts_Event>()
{
  return "base_interfaces_demo::srv::AddInts_Event";
}

template<>
inline const char * name<base_interfaces_demo::srv::AddInts_Event>()
{
  return "base_interfaces_demo/srv/AddInts_Event";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::AddInts_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfaces_demo::srv::AddInts_Event>
  : std::integral_constant<bool, has_bounded_size<base_interfaces_demo::srv::AddInts_Request>::value && has_bounded_size<base_interfaces_demo::srv::AddInts_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<base_interfaces_demo::srv::AddInts_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces_demo::srv::AddInts>()
{
  return "base_interfaces_demo::srv::AddInts";
}

template<>
inline const char * name<base_interfaces_demo::srv::AddInts>()
{
  return "base_interfaces_demo/srv/AddInts";
}

template<>
struct has_fixed_size<base_interfaces_demo::srv::AddInts>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfaces_demo::srv::AddInts_Request>::value &&
    has_fixed_size<base_interfaces_demo::srv::AddInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfaces_demo::srv::AddInts>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfaces_demo::srv::AddInts_Request>::value &&
    has_bounded_size<base_interfaces_demo::srv::AddInts_Response>::value
  >
{
};

template<>
struct is_service<base_interfaces_demo::srv::AddInts>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfaces_demo::srv::AddInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfaces_demo::srv::AddInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__ADD_INTS__TRAITS_HPP_
