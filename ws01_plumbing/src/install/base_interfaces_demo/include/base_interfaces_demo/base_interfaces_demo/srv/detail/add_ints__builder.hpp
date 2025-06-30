// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:srv/AddInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces_demo/srv/add_ints.hpp"


#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__ADD_INTS__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__ADD_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces_demo/srv/detail/add_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_AddInts_Request_num2
{
public:
  explicit Init_AddInts_Request_num2(::base_interfaces_demo::srv::AddInts_Request & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::srv::AddInts_Request num2(::base_interfaces_demo::srv::AddInts_Request::_num2_type arg)
  {
    msg_.num2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::AddInts_Request msg_;
};

class Init_AddInts_Request_num1
{
public:
  Init_AddInts_Request_num1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddInts_Request_num2 num1(::base_interfaces_demo::srv::AddInts_Request::_num1_type arg)
  {
    msg_.num1 = std::move(arg);
    return Init_AddInts_Request_num2(msg_);
  }

private:
  ::base_interfaces_demo::srv::AddInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::AddInts_Request>()
{
  return base_interfaces_demo::srv::builder::Init_AddInts_Request_num1();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_AddInts_Response_sum
{
public:
  Init_AddInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::srv::AddInts_Response sum(::base_interfaces_demo::srv::AddInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::AddInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::AddInts_Response>()
{
  return base_interfaces_demo::srv::builder::Init_AddInts_Response_sum();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace srv
{

namespace builder
{

class Init_AddInts_Event_response
{
public:
  explicit Init_AddInts_Event_response(::base_interfaces_demo::srv::AddInts_Event & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::srv::AddInts_Event response(::base_interfaces_demo::srv::AddInts_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::srv::AddInts_Event msg_;
};

class Init_AddInts_Event_request
{
public:
  explicit Init_AddInts_Event_request(::base_interfaces_demo::srv::AddInts_Event & msg)
  : msg_(msg)
  {}
  Init_AddInts_Event_response request(::base_interfaces_demo::srv::AddInts_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AddInts_Event_response(msg_);
  }

private:
  ::base_interfaces_demo::srv::AddInts_Event msg_;
};

class Init_AddInts_Event_info
{
public:
  Init_AddInts_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddInts_Event_request info(::base_interfaces_demo::srv::AddInts_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AddInts_Event_request(msg_);
  }

private:
  ::base_interfaces_demo::srv::AddInts_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::srv::AddInts_Event>()
{
  return base_interfaces_demo::srv::builder::Init_AddInts_Event_info();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__ADD_INTS__BUILDER_HPP_
