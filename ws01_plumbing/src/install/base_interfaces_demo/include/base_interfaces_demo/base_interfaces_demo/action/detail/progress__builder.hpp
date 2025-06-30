// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:action/Progress.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces_demo/action/progress.hpp"


#ifndef BASE_INTERFACES_DEMO__ACTION__DETAIL__PROGRESS__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__ACTION__DETAIL__PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces_demo/action/detail/progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Progress_Goal_num
{
public:
  Init_Progress_Goal_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::action::Progress_Goal num(::base_interfaces_demo::action::Progress_Goal::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Progress_Goal>()
{
  return base_interfaces_demo::action::builder::Init_Progress_Goal_num();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Progress_Result_sum
{
public:
  Init_Progress_Result_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::action::Progress_Result sum(::base_interfaces_demo::action::Progress_Result::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Progress_Result>()
{
  return base_interfaces_demo::action::builder::Init_Progress_Result_sum();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Progress_Feedback_progress
{
public:
  Init_Progress_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::action::Progress_Feedback progress(::base_interfaces_demo::action::Progress_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Progress_Feedback>()
{
  return base_interfaces_demo::action::builder::Init_Progress_Feedback_progress();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Progress_SendGoal_Request_goal
{
public:
  explicit Init_Progress_SendGoal_Request_goal(::base_interfaces_demo::action::Progress_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Progress_SendGoal_Request goal(::base_interfaces_demo::action::Progress_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_SendGoal_Request msg_;
};

class Init_Progress_SendGoal_Request_goal_id
{
public:
  Init_Progress_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progress_SendGoal_Request_goal goal_id(::base_interfaces_demo::action::Progress_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Progress_SendGoal_Request_goal(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Progress_SendGoal_Request>()
{
  return base_interfaces_demo::action::builder::Init_Progress_SendGoal_Request_goal_id();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Progress_SendGoal_Response_stamp
{
public:
  explicit Init_Progress_SendGoal_Response_stamp(::base_interfaces_demo::action::Progress_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Progress_SendGoal_Response stamp(::base_interfaces_demo::action::Progress_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_SendGoal_Response msg_;
};

class Init_Progress_SendGoal_Response_accepted
{
public:
  Init_Progress_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progress_SendGoal_Response_stamp accepted(::base_interfaces_demo::action::Progress_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Progress_SendGoal_Response_stamp(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Progress_SendGoal_Response>()
{
  return base_interfaces_demo::action::builder::Init_Progress_SendGoal_Response_accepted();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Progress_SendGoal_Event_response
{
public:
  explicit Init_Progress_SendGoal_Event_response(::base_interfaces_demo::action::Progress_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Progress_SendGoal_Event response(::base_interfaces_demo::action::Progress_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_SendGoal_Event msg_;
};

class Init_Progress_SendGoal_Event_request
{
public:
  explicit Init_Progress_SendGoal_Event_request(::base_interfaces_demo::action::Progress_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Progress_SendGoal_Event_response request(::base_interfaces_demo::action::Progress_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Progress_SendGoal_Event_response(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_SendGoal_Event msg_;
};

class Init_Progress_SendGoal_Event_info
{
public:
  Init_Progress_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progress_SendGoal_Event_request info(::base_interfaces_demo::action::Progress_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Progress_SendGoal_Event_request(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Progress_SendGoal_Event>()
{
  return base_interfaces_demo::action::builder::Init_Progress_SendGoal_Event_info();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Progress_GetResult_Request_goal_id
{
public:
  Init_Progress_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::action::Progress_GetResult_Request goal_id(::base_interfaces_demo::action::Progress_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Progress_GetResult_Request>()
{
  return base_interfaces_demo::action::builder::Init_Progress_GetResult_Request_goal_id();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Progress_GetResult_Response_result
{
public:
  explicit Init_Progress_GetResult_Response_result(::base_interfaces_demo::action::Progress_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Progress_GetResult_Response result(::base_interfaces_demo::action::Progress_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_GetResult_Response msg_;
};

class Init_Progress_GetResult_Response_status
{
public:
  Init_Progress_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progress_GetResult_Response_result status(::base_interfaces_demo::action::Progress_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Progress_GetResult_Response_result(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Progress_GetResult_Response>()
{
  return base_interfaces_demo::action::builder::Init_Progress_GetResult_Response_status();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Progress_GetResult_Event_response
{
public:
  explicit Init_Progress_GetResult_Event_response(::base_interfaces_demo::action::Progress_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Progress_GetResult_Event response(::base_interfaces_demo::action::Progress_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_GetResult_Event msg_;
};

class Init_Progress_GetResult_Event_request
{
public:
  explicit Init_Progress_GetResult_Event_request(::base_interfaces_demo::action::Progress_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Progress_GetResult_Event_response request(::base_interfaces_demo::action::Progress_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Progress_GetResult_Event_response(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_GetResult_Event msg_;
};

class Init_Progress_GetResult_Event_info
{
public:
  Init_Progress_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progress_GetResult_Event_request info(::base_interfaces_demo::action::Progress_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Progress_GetResult_Event_request(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Progress_GetResult_Event>()
{
  return base_interfaces_demo::action::builder::Init_Progress_GetResult_Event_info();
}

}  // namespace base_interfaces_demo


namespace base_interfaces_demo
{

namespace action
{

namespace builder
{

class Init_Progress_FeedbackMessage_feedback
{
public:
  explicit Init_Progress_FeedbackMessage_feedback(::base_interfaces_demo::action::Progress_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::action::Progress_FeedbackMessage feedback(::base_interfaces_demo::action::Progress_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_FeedbackMessage msg_;
};

class Init_Progress_FeedbackMessage_goal_id
{
public:
  Init_Progress_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progress_FeedbackMessage_feedback goal_id(::base_interfaces_demo::action::Progress_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Progress_FeedbackMessage_feedback(msg_);
  }

private:
  ::base_interfaces_demo::action::Progress_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::action::Progress_FeedbackMessage>()
{
  return base_interfaces_demo::action::builder::Init_Progress_FeedbackMessage_goal_id();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__ACTION__DETAIL__PROGRESS__BUILDER_HPP_
