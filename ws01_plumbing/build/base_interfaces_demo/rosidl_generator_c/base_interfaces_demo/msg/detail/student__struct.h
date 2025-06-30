// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/Student.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces_demo/msg/student.h"


#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__STUDENT__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__STUDENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Student in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__Student
{
  rosidl_runtime_c__String name;
  int32_t age;
  double height;
} base_interfaces_demo__msg__Student;

// Struct for a sequence of base_interfaces_demo__msg__Student.
typedef struct base_interfaces_demo__msg__Student__Sequence
{
  base_interfaces_demo__msg__Student * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__Student__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__STUDENT__STRUCT_H_
