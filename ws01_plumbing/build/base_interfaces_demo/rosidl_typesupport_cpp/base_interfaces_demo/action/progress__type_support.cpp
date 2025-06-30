// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from base_interfaces_demo:action/Progress.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "base_interfaces_demo/action/detail/progress__functions.h"
#include "base_interfaces_demo/action/detail/progress__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Progress_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Progress_Goal_type_support_ids_t;

static const _Progress_Goal_type_support_ids_t _Progress_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Progress_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Progress_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Progress_Goal_type_support_symbol_names_t _Progress_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, action, Progress_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, action, Progress_Goal)),
  }
};

typedef struct _Progress_Goal_type_support_data_t
{
  void * data[2];
} _Progress_Goal_type_support_data_t;

static _Progress_Goal_type_support_data_t _Progress_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Progress_Goal_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Progress_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Progress_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Progress_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Progress_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Progress_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces_demo__action__Progress_Goal__get_type_hash,
  &base_interfaces_demo__action__Progress_Goal__get_type_description,
  &base_interfaces_demo__action__Progress_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces_demo::action::Progress_Goal>()
{
  return &::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress_Goal)() {
  return get_message_type_support_handle<base_interfaces_demo::action::Progress_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Progress_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Progress_Result_type_support_ids_t;

static const _Progress_Result_type_support_ids_t _Progress_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Progress_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Progress_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Progress_Result_type_support_symbol_names_t _Progress_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, action, Progress_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, action, Progress_Result)),
  }
};

typedef struct _Progress_Result_type_support_data_t
{
  void * data[2];
} _Progress_Result_type_support_data_t;

static _Progress_Result_type_support_data_t _Progress_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Progress_Result_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Progress_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Progress_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Progress_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Progress_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Progress_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces_demo__action__Progress_Result__get_type_hash,
  &base_interfaces_demo__action__Progress_Result__get_type_description,
  &base_interfaces_demo__action__Progress_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces_demo::action::Progress_Result>()
{
  return &::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress_Result)() {
  return get_message_type_support_handle<base_interfaces_demo::action::Progress_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Progress_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Progress_Feedback_type_support_ids_t;

static const _Progress_Feedback_type_support_ids_t _Progress_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Progress_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Progress_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Progress_Feedback_type_support_symbol_names_t _Progress_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, action, Progress_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, action, Progress_Feedback)),
  }
};

typedef struct _Progress_Feedback_type_support_data_t
{
  void * data[2];
} _Progress_Feedback_type_support_data_t;

static _Progress_Feedback_type_support_data_t _Progress_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Progress_Feedback_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Progress_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Progress_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Progress_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Progress_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Progress_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces_demo__action__Progress_Feedback__get_type_hash,
  &base_interfaces_demo__action__Progress_Feedback__get_type_description,
  &base_interfaces_demo__action__Progress_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces_demo::action::Progress_Feedback>()
{
  return &::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress_Feedback)() {
  return get_message_type_support_handle<base_interfaces_demo::action::Progress_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Progress_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Progress_SendGoal_Request_type_support_ids_t;

static const _Progress_SendGoal_Request_type_support_ids_t _Progress_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Progress_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Progress_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Progress_SendGoal_Request_type_support_symbol_names_t _Progress_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, action, Progress_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, action, Progress_SendGoal_Request)),
  }
};

typedef struct _Progress_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Progress_SendGoal_Request_type_support_data_t;

static _Progress_SendGoal_Request_type_support_data_t _Progress_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Progress_SendGoal_Request_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Progress_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Progress_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Progress_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Progress_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Progress_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces_demo__action__Progress_SendGoal_Request__get_type_hash,
  &base_interfaces_demo__action__Progress_SendGoal_Request__get_type_description,
  &base_interfaces_demo__action__Progress_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces_demo::action::Progress_SendGoal_Request>()
{
  return &::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress_SendGoal_Request)() {
  return get_message_type_support_handle<base_interfaces_demo::action::Progress_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Progress_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Progress_SendGoal_Response_type_support_ids_t;

static const _Progress_SendGoal_Response_type_support_ids_t _Progress_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Progress_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Progress_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Progress_SendGoal_Response_type_support_symbol_names_t _Progress_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, action, Progress_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, action, Progress_SendGoal_Response)),
  }
};

typedef struct _Progress_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Progress_SendGoal_Response_type_support_data_t;

static _Progress_SendGoal_Response_type_support_data_t _Progress_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Progress_SendGoal_Response_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Progress_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Progress_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Progress_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Progress_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Progress_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces_demo__action__Progress_SendGoal_Response__get_type_hash,
  &base_interfaces_demo__action__Progress_SendGoal_Response__get_type_description,
  &base_interfaces_demo__action__Progress_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces_demo::action::Progress_SendGoal_Response>()
{
  return &::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress_SendGoal_Response)() {
  return get_message_type_support_handle<base_interfaces_demo::action::Progress_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Progress_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Progress_SendGoal_Event_type_support_ids_t;

static const _Progress_SendGoal_Event_type_support_ids_t _Progress_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Progress_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Progress_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Progress_SendGoal_Event_type_support_symbol_names_t _Progress_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, action, Progress_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, action, Progress_SendGoal_Event)),
  }
};

typedef struct _Progress_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _Progress_SendGoal_Event_type_support_data_t;

static _Progress_SendGoal_Event_type_support_data_t _Progress_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Progress_SendGoal_Event_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Progress_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Progress_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Progress_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Progress_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Progress_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces_demo__action__Progress_SendGoal_Event__get_type_hash,
  &base_interfaces_demo__action__Progress_SendGoal_Event__get_type_description,
  &base_interfaces_demo__action__Progress_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces_demo::action::Progress_SendGoal_Event>()
{
  return &::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress_SendGoal_Event)() {
  return get_message_type_support_handle<base_interfaces_demo::action::Progress_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Progress_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Progress_SendGoal_type_support_ids_t;

static const _Progress_SendGoal_type_support_ids_t _Progress_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Progress_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Progress_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Progress_SendGoal_type_support_symbol_names_t _Progress_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, action, Progress_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, action, Progress_SendGoal)),
  }
};

typedef struct _Progress_SendGoal_type_support_data_t
{
  void * data[2];
} _Progress_SendGoal_type_support_data_t;

static _Progress_SendGoal_type_support_data_t _Progress_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Progress_SendGoal_service_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Progress_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Progress_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Progress_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Progress_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Progress_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfaces_demo::action::Progress_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfaces_demo::action::Progress_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfaces_demo::action::Progress_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<base_interfaces_demo::action::Progress_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<base_interfaces_demo::action::Progress_SendGoal>,
  &base_interfaces_demo__action__Progress_SendGoal__get_type_hash,
  &base_interfaces_demo__action__Progress_SendGoal__get_type_description,
  &base_interfaces_demo__action__Progress_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<base_interfaces_demo::action::Progress_SendGoal>()
{
  return &::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<base_interfaces_demo::action::Progress_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Progress_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Progress_GetResult_Request_type_support_ids_t;

static const _Progress_GetResult_Request_type_support_ids_t _Progress_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Progress_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Progress_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Progress_GetResult_Request_type_support_symbol_names_t _Progress_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, action, Progress_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, action, Progress_GetResult_Request)),
  }
};

typedef struct _Progress_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Progress_GetResult_Request_type_support_data_t;

static _Progress_GetResult_Request_type_support_data_t _Progress_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Progress_GetResult_Request_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Progress_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Progress_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Progress_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Progress_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Progress_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces_demo__action__Progress_GetResult_Request__get_type_hash,
  &base_interfaces_demo__action__Progress_GetResult_Request__get_type_description,
  &base_interfaces_demo__action__Progress_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces_demo::action::Progress_GetResult_Request>()
{
  return &::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress_GetResult_Request)() {
  return get_message_type_support_handle<base_interfaces_demo::action::Progress_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Progress_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Progress_GetResult_Response_type_support_ids_t;

static const _Progress_GetResult_Response_type_support_ids_t _Progress_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Progress_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Progress_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Progress_GetResult_Response_type_support_symbol_names_t _Progress_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, action, Progress_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, action, Progress_GetResult_Response)),
  }
};

typedef struct _Progress_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Progress_GetResult_Response_type_support_data_t;

static _Progress_GetResult_Response_type_support_data_t _Progress_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Progress_GetResult_Response_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Progress_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Progress_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Progress_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Progress_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Progress_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces_demo__action__Progress_GetResult_Response__get_type_hash,
  &base_interfaces_demo__action__Progress_GetResult_Response__get_type_description,
  &base_interfaces_demo__action__Progress_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces_demo::action::Progress_GetResult_Response>()
{
  return &::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress_GetResult_Response)() {
  return get_message_type_support_handle<base_interfaces_demo::action::Progress_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Progress_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Progress_GetResult_Event_type_support_ids_t;

static const _Progress_GetResult_Event_type_support_ids_t _Progress_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Progress_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Progress_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Progress_GetResult_Event_type_support_symbol_names_t _Progress_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, action, Progress_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, action, Progress_GetResult_Event)),
  }
};

typedef struct _Progress_GetResult_Event_type_support_data_t
{
  void * data[2];
} _Progress_GetResult_Event_type_support_data_t;

static _Progress_GetResult_Event_type_support_data_t _Progress_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Progress_GetResult_Event_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Progress_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Progress_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Progress_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Progress_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Progress_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces_demo__action__Progress_GetResult_Event__get_type_hash,
  &base_interfaces_demo__action__Progress_GetResult_Event__get_type_description,
  &base_interfaces_demo__action__Progress_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces_demo::action::Progress_GetResult_Event>()
{
  return &::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress_GetResult_Event)() {
  return get_message_type_support_handle<base_interfaces_demo::action::Progress_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Progress_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Progress_GetResult_type_support_ids_t;

static const _Progress_GetResult_type_support_ids_t _Progress_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Progress_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Progress_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Progress_GetResult_type_support_symbol_names_t _Progress_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, action, Progress_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, action, Progress_GetResult)),
  }
};

typedef struct _Progress_GetResult_type_support_data_t
{
  void * data[2];
} _Progress_GetResult_type_support_data_t;

static _Progress_GetResult_type_support_data_t _Progress_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Progress_GetResult_service_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Progress_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Progress_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Progress_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Progress_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Progress_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfaces_demo::action::Progress_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfaces_demo::action::Progress_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfaces_demo::action::Progress_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<base_interfaces_demo::action::Progress_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<base_interfaces_demo::action::Progress_GetResult>,
  &base_interfaces_demo__action__Progress_GetResult__get_type_hash,
  &base_interfaces_demo__action__Progress_GetResult__get_type_description,
  &base_interfaces_demo__action__Progress_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<base_interfaces_demo::action::Progress_GetResult>()
{
  return &::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<base_interfaces_demo::action::Progress_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Progress_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Progress_FeedbackMessage_type_support_ids_t;

static const _Progress_FeedbackMessage_type_support_ids_t _Progress_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Progress_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Progress_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Progress_FeedbackMessage_type_support_symbol_names_t _Progress_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces_demo, action, Progress_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces_demo, action, Progress_FeedbackMessage)),
  }
};

typedef struct _Progress_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Progress_FeedbackMessage_type_support_data_t;

static _Progress_FeedbackMessage_type_support_data_t _Progress_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Progress_FeedbackMessage_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Progress_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Progress_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Progress_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Progress_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Progress_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces_demo__action__Progress_FeedbackMessage__get_type_hash,
  &base_interfaces_demo__action__Progress_FeedbackMessage__get_type_description,
  &base_interfaces_demo__action__Progress_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces_demo::action::Progress_FeedbackMessage>()
{
  return &::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress_FeedbackMessage)() {
  return get_message_type_support_handle<base_interfaces_demo::action::Progress_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "base_interfaces_demo/action/detail/progress__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Progress_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &base_interfaces_demo__action__Progress__get_type_hash,
  &base_interfaces_demo__action__Progress__get_type_description,
  &base_interfaces_demo__action__Progress__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace base_interfaces_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<base_interfaces_demo::action::Progress>()
{
  using ::base_interfaces_demo::action::rosidl_typesupport_cpp::Progress_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Progress_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::base_interfaces_demo::action::Progress::Impl::SendGoalService>();
  Progress_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::base_interfaces_demo::action::Progress::Impl::GetResultService>();
  Progress_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::base_interfaces_demo::action::Progress::Impl::CancelGoalService>();
  Progress_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::base_interfaces_demo::action::Progress::Impl::FeedbackMessage>();
  Progress_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::base_interfaces_demo::action::Progress::Impl::GoalStatusMessage>();
  return &Progress_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces_demo, action, Progress)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<base_interfaces_demo::action::Progress>();
}

#ifdef __cplusplus
}
#endif
