// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from base_interfaces_demo:msg/Student.idl
// generated code does not contain a copyright notice

#include "base_interfaces_demo/msg/detail/student__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_type_hash_t *
base_interfaces_demo__msg__Student__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0xf3, 0xe2, 0x90, 0x7d, 0x8e, 0x61, 0xf6,
      0x8f, 0x83, 0x7c, 0x54, 0xe8, 0xb7, 0xcf, 0xe0,
      0x8f, 0xd6, 0xf5, 0x63, 0x9a, 0x62, 0x30, 0xb4,
      0x33, 0x1b, 0xe0, 0xc5, 0x50, 0x98, 0xcd, 0x9f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char base_interfaces_demo__msg__Student__TYPE_NAME[] = "base_interfaces_demo/msg/Student";

// Define type names, field names, and default values
static char base_interfaces_demo__msg__Student__FIELD_NAME__name[] = "name";
static char base_interfaces_demo__msg__Student__FIELD_NAME__age[] = "age";
static char base_interfaces_demo__msg__Student__FIELD_NAME__height[] = "height";

static rosidl_runtime_c__type_description__Field base_interfaces_demo__msg__Student__FIELDS[] = {
  {
    {base_interfaces_demo__msg__Student__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces_demo__msg__Student__FIELD_NAME__age, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces_demo__msg__Student__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_interfaces_demo__msg__Student__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfaces_demo__msg__Student__TYPE_NAME, 32, 32},
      {base_interfaces_demo__msg__Student__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "int32 age\n"
  "float64 height";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
base_interfaces_demo__msg__Student__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfaces_demo__msg__Student__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfaces_demo__msg__Student__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfaces_demo__msg__Student__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
