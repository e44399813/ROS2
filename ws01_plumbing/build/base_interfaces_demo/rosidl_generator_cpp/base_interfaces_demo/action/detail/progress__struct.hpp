// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces_demo:action/Progress.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces_demo/action/progress.hpp"


#ifndef BASE_INTERFACES_DEMO__ACTION__DETAIL__PROGRESS__STRUCT_HPP_
#define BASE_INTERFACES_DEMO__ACTION__DETAIL__PROGRESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Progress_Goal __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Progress_Goal __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progress_Goal_
{
  using Type = Progress_Goal_<ContainerAllocator>;

  explicit Progress_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  explicit Progress_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  // field types and members
  using _num_type =
    int64_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__num(
    const int64_t & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Progress_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Progress_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Progress_Goal
    std::shared_ptr<base_interfaces_demo::action::Progress_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Progress_Goal
    std::shared_ptr<base_interfaces_demo::action::Progress_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progress_Goal_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progress_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progress_Goal_

// alias to use template instance with default allocator
using Progress_Goal =
  base_interfaces_demo::action::Progress_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Progress_Result __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Progress_Result __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progress_Result_
{
  using Type = Progress_Result_<ContainerAllocator>;

  explicit Progress_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  explicit Progress_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  // field types and members
  using _sum_type =
    int64_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const int64_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Progress_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Progress_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Progress_Result
    std::shared_ptr<base_interfaces_demo::action::Progress_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Progress_Result
    std::shared_ptr<base_interfaces_demo::action::Progress_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progress_Result_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progress_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progress_Result_

// alias to use template instance with default allocator
using Progress_Result =
  base_interfaces_demo::action::Progress_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo


#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Progress_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Progress_Feedback __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progress_Feedback_
{
  using Type = Progress_Feedback_<ContainerAllocator>;

  explicit Progress_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0;
    }
  }

  explicit Progress_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0;
    }
  }

  // field types and members
  using _progress_type =
    double;
  _progress_type progress;

  // setters for named parameter idiom
  Type & set__progress(
    const double & _arg)
  {
    this->progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Progress_Feedback
    std::shared_ptr<base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Progress_Feedback
    std::shared_ptr<base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progress_Feedback_ & other) const
  {
    if (this->progress != other.progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progress_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progress_Feedback_

// alias to use template instance with default allocator
using Progress_Feedback =
  base_interfaces_demo::action::Progress_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "base_interfaces_demo/action/detail/progress__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Progress_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Progress_SendGoal_Request __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progress_SendGoal_Request_
{
  using Type = Progress_SendGoal_Request_<ContainerAllocator>;

  explicit Progress_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Progress_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    base_interfaces_demo::action::Progress_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const base_interfaces_demo::action::Progress_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Progress_SendGoal_Request
    std::shared_ptr<base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Progress_SendGoal_Request
    std::shared_ptr<base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progress_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progress_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progress_SendGoal_Request_

// alias to use template instance with default allocator
using Progress_SendGoal_Request =
  base_interfaces_demo::action::Progress_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Progress_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Progress_SendGoal_Response __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progress_SendGoal_Response_
{
  using Type = Progress_SendGoal_Response_<ContainerAllocator>;

  explicit Progress_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Progress_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Progress_SendGoal_Response
    std::shared_ptr<base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Progress_SendGoal_Response
    std::shared_ptr<base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progress_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progress_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progress_SendGoal_Response_

// alias to use template instance with default allocator
using Progress_SendGoal_Response =
  base_interfaces_demo::action::Progress_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Progress_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Progress_SendGoal_Event __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progress_SendGoal_Event_
{
  using Type = Progress_SendGoal_Event_<ContainerAllocator>;

  explicit Progress_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Progress_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfaces_demo::action::Progress_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfaces_demo::action::Progress_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Progress_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Progress_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Progress_SendGoal_Event
    std::shared_ptr<base_interfaces_demo::action::Progress_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Progress_SendGoal_Event
    std::shared_ptr<base_interfaces_demo::action::Progress_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progress_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progress_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progress_SendGoal_Event_

// alias to use template instance with default allocator
using Progress_SendGoal_Event =
  base_interfaces_demo::action::Progress_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo

namespace base_interfaces_demo
{

namespace action
{

struct Progress_SendGoal
{
  using Request = base_interfaces_demo::action::Progress_SendGoal_Request;
  using Response = base_interfaces_demo::action::Progress_SendGoal_Response;
  using Event = base_interfaces_demo::action::Progress_SendGoal_Event;
};

}  // namespace action

}  // namespace base_interfaces_demo


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Progress_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Progress_GetResult_Request __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progress_GetResult_Request_
{
  using Type = Progress_GetResult_Request_<ContainerAllocator>;

  explicit Progress_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Progress_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Progress_GetResult_Request
    std::shared_ptr<base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Progress_GetResult_Request
    std::shared_ptr<base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progress_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progress_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progress_GetResult_Request_

// alias to use template instance with default allocator
using Progress_GetResult_Request =
  base_interfaces_demo::action::Progress_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo


// Include directives for member types
// Member 'result'
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Progress_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Progress_GetResult_Response __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progress_GetResult_Response_
{
  using Type = Progress_GetResult_Response_<ContainerAllocator>;

  explicit Progress_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Progress_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    base_interfaces_demo::action::Progress_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const base_interfaces_demo::action::Progress_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Progress_GetResult_Response
    std::shared_ptr<base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Progress_GetResult_Response
    std::shared_ptr<base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progress_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progress_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progress_GetResult_Response_

// alias to use template instance with default allocator
using Progress_GetResult_Response =
  base_interfaces_demo::action::Progress_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Progress_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Progress_GetResult_Event __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progress_GetResult_Event_
{
  using Type = Progress_GetResult_Event_<ContainerAllocator>;

  explicit Progress_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Progress_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfaces_demo::action::Progress_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfaces_demo::action::Progress_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Progress_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Progress_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Progress_GetResult_Event
    std::shared_ptr<base_interfaces_demo::action::Progress_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Progress_GetResult_Event
    std::shared_ptr<base_interfaces_demo::action::Progress_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progress_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progress_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progress_GetResult_Event_

// alias to use template instance with default allocator
using Progress_GetResult_Event =
  base_interfaces_demo::action::Progress_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo

namespace base_interfaces_demo
{

namespace action
{

struct Progress_GetResult
{
  using Request = base_interfaces_demo::action::Progress_GetResult_Request;
  using Response = base_interfaces_demo::action::Progress_GetResult_Response;
  using Event = base_interfaces_demo::action::Progress_GetResult_Event;
};

}  // namespace action

}  // namespace base_interfaces_demo


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces_demo__action__Progress_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces_demo__action__Progress_FeedbackMessage __declspec(deprecated)
#endif

namespace base_interfaces_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progress_FeedbackMessage_
{
  using Type = Progress_FeedbackMessage_<ContainerAllocator>;

  explicit Progress_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Progress_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const base_interfaces_demo::action::Progress_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces_demo::action::Progress_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces_demo::action::Progress_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces_demo::action::Progress_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces_demo::action::Progress_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces_demo::action::Progress_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces_demo::action::Progress_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces_demo__action__Progress_FeedbackMessage
    std::shared_ptr<base_interfaces_demo::action::Progress_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces_demo__action__Progress_FeedbackMessage
    std::shared_ptr<base_interfaces_demo::action::Progress_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progress_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progress_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progress_FeedbackMessage_

// alias to use template instance with default allocator
using Progress_FeedbackMessage =
  base_interfaces_demo::action::Progress_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfaces_demo

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace base_interfaces_demo
{

namespace action
{

struct Progress
{
  /// The goal message defined in the action definition.
  using Goal = base_interfaces_demo::action::Progress_Goal;
  /// The result message defined in the action definition.
  using Result = base_interfaces_demo::action::Progress_Result;
  /// The feedback message defined in the action definition.
  using Feedback = base_interfaces_demo::action::Progress_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = base_interfaces_demo::action::Progress_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = base_interfaces_demo::action::Progress_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = base_interfaces_demo::action::Progress_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Progress Progress;

}  // namespace action

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__ACTION__DETAIL__PROGRESS__STRUCT_HPP_
