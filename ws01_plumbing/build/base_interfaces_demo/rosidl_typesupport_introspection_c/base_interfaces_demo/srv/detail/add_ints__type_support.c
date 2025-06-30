// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from base_interfaces_demo:srv/AddInts.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "base_interfaces_demo/srv/detail/add_ints__rosidl_typesupport_introspection_c.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "base_interfaces_demo/srv/detail/add_ints__functions.h"
#include "base_interfaces_demo/srv/detail/add_ints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__srv__AddInts_Request__init(message_memory);
}

void base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_fini_function(void * message_memory)
{
  base_interfaces_demo__srv__AddInts_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_member_array[2] = {
  {
    "num1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__srv__AddInts_Request, num1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__srv__AddInts_Request, num2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_members = {
  "base_interfaces_demo__srv",  // message namespace
  "AddInts_Request",  // message name
  2,  // number of fields
  sizeof(base_interfaces_demo__srv__AddInts_Request),
  false,  // has_any_key_member_
  base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_member_array,  // message members
  base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_type_support_handle = {
  0,
  &base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_members,
  get_message_typesupport_handle_function,
  &base_interfaces_demo__srv__AddInts_Request__get_type_hash,
  &base_interfaces_demo__srv__AddInts_Request__get_type_description,
  &base_interfaces_demo__srv__AddInts_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, srv, AddInts_Request)() {
  if (!base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_type_support_handle.typesupport_identifier) {
    base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/srv/detail/add_ints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/srv/detail/add_ints__functions.h"
// already included above
// #include "base_interfaces_demo/srv/detail/add_ints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__srv__AddInts_Response__init(message_memory);
}

void base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_fini_function(void * message_memory)
{
  base_interfaces_demo__srv__AddInts_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__srv__AddInts_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_members = {
  "base_interfaces_demo__srv",  // message namespace
  "AddInts_Response",  // message name
  1,  // number of fields
  sizeof(base_interfaces_demo__srv__AddInts_Response),
  false,  // has_any_key_member_
  base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_member_array,  // message members
  base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_type_support_handle = {
  0,
  &base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_members,
  get_message_typesupport_handle_function,
  &base_interfaces_demo__srv__AddInts_Response__get_type_hash,
  &base_interfaces_demo__srv__AddInts_Response__get_type_description,
  &base_interfaces_demo__srv__AddInts_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, srv, AddInts_Response)() {
  if (!base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_type_support_handle.typesupport_identifier) {
    base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/srv/detail/add_ints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/srv/detail/add_ints__functions.h"
// already included above
// #include "base_interfaces_demo/srv/detail/add_ints__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "base_interfaces_demo/srv/add_ints.h"
// Member `request`
// Member `response`
// already included above
// #include "base_interfaces_demo/srv/detail/add_ints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__srv__AddInts_Event__init(message_memory);
}

void base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_fini_function(void * message_memory)
{
  base_interfaces_demo__srv__AddInts_Event__fini(message_memory);
}

size_t base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__size_function__AddInts_Event__request(
  const void * untyped_member)
{
  const base_interfaces_demo__srv__AddInts_Request__Sequence * member =
    (const base_interfaces_demo__srv__AddInts_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddInts_Event__request(
  const void * untyped_member, size_t index)
{
  const base_interfaces_demo__srv__AddInts_Request__Sequence * member =
    (const base_interfaces_demo__srv__AddInts_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__get_function__AddInts_Event__request(
  void * untyped_member, size_t index)
{
  base_interfaces_demo__srv__AddInts_Request__Sequence * member =
    (base_interfaces_demo__srv__AddInts_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__fetch_function__AddInts_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const base_interfaces_demo__srv__AddInts_Request * item =
    ((const base_interfaces_demo__srv__AddInts_Request *)
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddInts_Event__request(untyped_member, index));
  base_interfaces_demo__srv__AddInts_Request * value =
    (base_interfaces_demo__srv__AddInts_Request *)(untyped_value);
  *value = *item;
}

void base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__assign_function__AddInts_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  base_interfaces_demo__srv__AddInts_Request * item =
    ((base_interfaces_demo__srv__AddInts_Request *)
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__get_function__AddInts_Event__request(untyped_member, index));
  const base_interfaces_demo__srv__AddInts_Request * value =
    (const base_interfaces_demo__srv__AddInts_Request *)(untyped_value);
  *item = *value;
}

bool base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__resize_function__AddInts_Event__request(
  void * untyped_member, size_t size)
{
  base_interfaces_demo__srv__AddInts_Request__Sequence * member =
    (base_interfaces_demo__srv__AddInts_Request__Sequence *)(untyped_member);
  base_interfaces_demo__srv__AddInts_Request__Sequence__fini(member);
  return base_interfaces_demo__srv__AddInts_Request__Sequence__init(member, size);
}

size_t base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__size_function__AddInts_Event__response(
  const void * untyped_member)
{
  const base_interfaces_demo__srv__AddInts_Response__Sequence * member =
    (const base_interfaces_demo__srv__AddInts_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddInts_Event__response(
  const void * untyped_member, size_t index)
{
  const base_interfaces_demo__srv__AddInts_Response__Sequence * member =
    (const base_interfaces_demo__srv__AddInts_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__get_function__AddInts_Event__response(
  void * untyped_member, size_t index)
{
  base_interfaces_demo__srv__AddInts_Response__Sequence * member =
    (base_interfaces_demo__srv__AddInts_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__fetch_function__AddInts_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const base_interfaces_demo__srv__AddInts_Response * item =
    ((const base_interfaces_demo__srv__AddInts_Response *)
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddInts_Event__response(untyped_member, index));
  base_interfaces_demo__srv__AddInts_Response * value =
    (base_interfaces_demo__srv__AddInts_Response *)(untyped_value);
  *value = *item;
}

void base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__assign_function__AddInts_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  base_interfaces_demo__srv__AddInts_Response * item =
    ((base_interfaces_demo__srv__AddInts_Response *)
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__get_function__AddInts_Event__response(untyped_member, index));
  const base_interfaces_demo__srv__AddInts_Response * value =
    (const base_interfaces_demo__srv__AddInts_Response *)(untyped_value);
  *item = *value;
}

bool base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__resize_function__AddInts_Event__response(
  void * untyped_member, size_t size)
{
  base_interfaces_demo__srv__AddInts_Response__Sequence * member =
    (base_interfaces_demo__srv__AddInts_Response__Sequence *)(untyped_member);
  base_interfaces_demo__srv__AddInts_Response__Sequence__fini(member);
  return base_interfaces_demo__srv__AddInts_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__srv__AddInts_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(base_interfaces_demo__srv__AddInts_Event, request),  // bytes offset in struct
    NULL,  // default value
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__size_function__AddInts_Event__request,  // size() function pointer
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddInts_Event__request,  // get_const(index) function pointer
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__get_function__AddInts_Event__request,  // get(index) function pointer
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__fetch_function__AddInts_Event__request,  // fetch(index, &value) function pointer
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__assign_function__AddInts_Event__request,  // assign(index, value) function pointer
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__resize_function__AddInts_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(base_interfaces_demo__srv__AddInts_Event, response),  // bytes offset in struct
    NULL,  // default value
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__size_function__AddInts_Event__response,  // size() function pointer
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__get_const_function__AddInts_Event__response,  // get_const(index) function pointer
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__get_function__AddInts_Event__response,  // get(index) function pointer
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__fetch_function__AddInts_Event__response,  // fetch(index, &value) function pointer
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__assign_function__AddInts_Event__response,  // assign(index, value) function pointer
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__resize_function__AddInts_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_message_members = {
  "base_interfaces_demo__srv",  // message namespace
  "AddInts_Event",  // message name
  3,  // number of fields
  sizeof(base_interfaces_demo__srv__AddInts_Event),
  false,  // has_any_key_member_
  base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_message_member_array,  // message members
  base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_message_type_support_handle = {
  0,
  &base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_message_members,
  get_message_typesupport_handle_function,
  &base_interfaces_demo__srv__AddInts_Event__get_type_hash,
  &base_interfaces_demo__srv__AddInts_Event__get_type_description,
  &base_interfaces_demo__srv__AddInts_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, srv, AddInts_Event)() {
  base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, srv, AddInts_Request)();
  base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, srv, AddInts_Response)();
  if (!base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_message_type_support_handle.typesupport_identifier) {
    base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/srv/detail/add_ints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers base_interfaces_demo__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_members = {
  "base_interfaces_demo__srv",  // service namespace
  "AddInts",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // base_interfaces_demo__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_Request_message_type_support_handle,
  NULL,  // response message
  // base_interfaces_demo__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_Response_message_type_support_handle
  NULL  // event_message
  // base_interfaces_demo__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_Response_message_type_support_handle
};


static rosidl_service_type_support_t base_interfaces_demo__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_type_support_handle = {
  0,
  &base_interfaces_demo__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_members,
  get_service_typesupport_handle_function,
  &base_interfaces_demo__srv__AddInts_Request__rosidl_typesupport_introspection_c__AddInts_Request_message_type_support_handle,
  &base_interfaces_demo__srv__AddInts_Response__rosidl_typesupport_introspection_c__AddInts_Response_message_type_support_handle,
  &base_interfaces_demo__srv__AddInts_Event__rosidl_typesupport_introspection_c__AddInts_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    base_interfaces_demo,
    srv,
    AddInts
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    base_interfaces_demo,
    srv,
    AddInts
  ),
  &base_interfaces_demo__srv__AddInts__get_type_hash,
  &base_interfaces_demo__srv__AddInts__get_type_description,
  &base_interfaces_demo__srv__AddInts__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, srv, AddInts_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, srv, AddInts_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, srv, AddInts_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, srv, AddInts)(void) {
  if (!base_interfaces_demo__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_type_support_handle.typesupport_identifier) {
    base_interfaces_demo__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)base_interfaces_demo__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, srv, AddInts_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, srv, AddInts_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, srv, AddInts_Event)()->data;
  }

  return &base_interfaces_demo__srv__detail__add_ints__rosidl_typesupport_introspection_c__AddInts_service_type_support_handle;
}
