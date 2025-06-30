// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from base_interfaces_demo:srv/AddInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces_demo/srv/add_ints.h"


#ifndef BASE_INTERFACES_DEMO__SRV__DETAIL__ADD_INTS__FUNCTIONS_H_
#define BASE_INTERFACES_DEMO__SRV__DETAIL__ADD_INTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "base_interfaces_demo/msg/rosidl_generator_c__visibility_control.h"

#include "base_interfaces_demo/srv/detail/add_ints__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_type_hash_t *
base_interfaces_demo__srv__AddInts__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_runtime_c__type_description__TypeDescription *
base_interfaces_demo__srv__AddInts__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_runtime_c__type_description__TypeSource *
base_interfaces_demo__srv__AddInts__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfaces_demo__srv__AddInts__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/AddInts message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__srv__AddInts_Request
 * )) before or use
 * base_interfaces_demo__srv__AddInts_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Request__init(base_interfaces_demo__srv__AddInts_Request * msg);

/// Finalize srv/AddInts message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__AddInts_Request__fini(base_interfaces_demo__srv__AddInts_Request * msg);

/// Create srv/AddInts message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__srv__AddInts_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__srv__AddInts_Request *
base_interfaces_demo__srv__AddInts_Request__create(void);

/// Destroy srv/AddInts message.
/**
 * It calls
 * base_interfaces_demo__srv__AddInts_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__AddInts_Request__destroy(base_interfaces_demo__srv__AddInts_Request * msg);

/// Check for srv/AddInts message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Request__are_equal(const base_interfaces_demo__srv__AddInts_Request * lhs, const base_interfaces_demo__srv__AddInts_Request * rhs);

/// Copy a srv/AddInts message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Request__copy(
  const base_interfaces_demo__srv__AddInts_Request * input,
  base_interfaces_demo__srv__AddInts_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_type_hash_t *
base_interfaces_demo__srv__AddInts_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_runtime_c__type_description__TypeDescription *
base_interfaces_demo__srv__AddInts_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_runtime_c__type_description__TypeSource *
base_interfaces_demo__srv__AddInts_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfaces_demo__srv__AddInts_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/AddInts messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__srv__AddInts_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Request__Sequence__init(base_interfaces_demo__srv__AddInts_Request__Sequence * array, size_t size);

/// Finalize array of srv/AddInts messages.
/**
 * It calls
 * base_interfaces_demo__srv__AddInts_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__AddInts_Request__Sequence__fini(base_interfaces_demo__srv__AddInts_Request__Sequence * array);

/// Create array of srv/AddInts messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__srv__AddInts_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__srv__AddInts_Request__Sequence *
base_interfaces_demo__srv__AddInts_Request__Sequence__create(size_t size);

/// Destroy array of srv/AddInts messages.
/**
 * It calls
 * base_interfaces_demo__srv__AddInts_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__AddInts_Request__Sequence__destroy(base_interfaces_demo__srv__AddInts_Request__Sequence * array);

/// Check for srv/AddInts message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Request__Sequence__are_equal(const base_interfaces_demo__srv__AddInts_Request__Sequence * lhs, const base_interfaces_demo__srv__AddInts_Request__Sequence * rhs);

/// Copy an array of srv/AddInts messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Request__Sequence__copy(
  const base_interfaces_demo__srv__AddInts_Request__Sequence * input,
  base_interfaces_demo__srv__AddInts_Request__Sequence * output);

/// Initialize srv/AddInts message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__srv__AddInts_Response
 * )) before or use
 * base_interfaces_demo__srv__AddInts_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Response__init(base_interfaces_demo__srv__AddInts_Response * msg);

/// Finalize srv/AddInts message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__AddInts_Response__fini(base_interfaces_demo__srv__AddInts_Response * msg);

/// Create srv/AddInts message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__srv__AddInts_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__srv__AddInts_Response *
base_interfaces_demo__srv__AddInts_Response__create(void);

/// Destroy srv/AddInts message.
/**
 * It calls
 * base_interfaces_demo__srv__AddInts_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__AddInts_Response__destroy(base_interfaces_demo__srv__AddInts_Response * msg);

/// Check for srv/AddInts message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Response__are_equal(const base_interfaces_demo__srv__AddInts_Response * lhs, const base_interfaces_demo__srv__AddInts_Response * rhs);

/// Copy a srv/AddInts message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Response__copy(
  const base_interfaces_demo__srv__AddInts_Response * input,
  base_interfaces_demo__srv__AddInts_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_type_hash_t *
base_interfaces_demo__srv__AddInts_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_runtime_c__type_description__TypeDescription *
base_interfaces_demo__srv__AddInts_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_runtime_c__type_description__TypeSource *
base_interfaces_demo__srv__AddInts_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfaces_demo__srv__AddInts_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/AddInts messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__srv__AddInts_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Response__Sequence__init(base_interfaces_demo__srv__AddInts_Response__Sequence * array, size_t size);

/// Finalize array of srv/AddInts messages.
/**
 * It calls
 * base_interfaces_demo__srv__AddInts_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__AddInts_Response__Sequence__fini(base_interfaces_demo__srv__AddInts_Response__Sequence * array);

/// Create array of srv/AddInts messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__srv__AddInts_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__srv__AddInts_Response__Sequence *
base_interfaces_demo__srv__AddInts_Response__Sequence__create(size_t size);

/// Destroy array of srv/AddInts messages.
/**
 * It calls
 * base_interfaces_demo__srv__AddInts_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__AddInts_Response__Sequence__destroy(base_interfaces_demo__srv__AddInts_Response__Sequence * array);

/// Check for srv/AddInts message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Response__Sequence__are_equal(const base_interfaces_demo__srv__AddInts_Response__Sequence * lhs, const base_interfaces_demo__srv__AddInts_Response__Sequence * rhs);

/// Copy an array of srv/AddInts messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Response__Sequence__copy(
  const base_interfaces_demo__srv__AddInts_Response__Sequence * input,
  base_interfaces_demo__srv__AddInts_Response__Sequence * output);

/// Initialize srv/AddInts message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_interfaces_demo__srv__AddInts_Event
 * )) before or use
 * base_interfaces_demo__srv__AddInts_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Event__init(base_interfaces_demo__srv__AddInts_Event * msg);

/// Finalize srv/AddInts message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__AddInts_Event__fini(base_interfaces_demo__srv__AddInts_Event * msg);

/// Create srv/AddInts message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_interfaces_demo__srv__AddInts_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__srv__AddInts_Event *
base_interfaces_demo__srv__AddInts_Event__create(void);

/// Destroy srv/AddInts message.
/**
 * It calls
 * base_interfaces_demo__srv__AddInts_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__AddInts_Event__destroy(base_interfaces_demo__srv__AddInts_Event * msg);

/// Check for srv/AddInts message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Event__are_equal(const base_interfaces_demo__srv__AddInts_Event * lhs, const base_interfaces_demo__srv__AddInts_Event * rhs);

/// Copy a srv/AddInts message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Event__copy(
  const base_interfaces_demo__srv__AddInts_Event * input,
  base_interfaces_demo__srv__AddInts_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_type_hash_t *
base_interfaces_demo__srv__AddInts_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_runtime_c__type_description__TypeDescription *
base_interfaces_demo__srv__AddInts_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_runtime_c__type_description__TypeSource *
base_interfaces_demo__srv__AddInts_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfaces_demo__srv__AddInts_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/AddInts messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_interfaces_demo__srv__AddInts_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Event__Sequence__init(base_interfaces_demo__srv__AddInts_Event__Sequence * array, size_t size);

/// Finalize array of srv/AddInts messages.
/**
 * It calls
 * base_interfaces_demo__srv__AddInts_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__AddInts_Event__Sequence__fini(base_interfaces_demo__srv__AddInts_Event__Sequence * array);

/// Create array of srv/AddInts messages.
/**
 * It allocates the memory for the array and calls
 * base_interfaces_demo__srv__AddInts_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
base_interfaces_demo__srv__AddInts_Event__Sequence *
base_interfaces_demo__srv__AddInts_Event__Sequence__create(size_t size);

/// Destroy array of srv/AddInts messages.
/**
 * It calls
 * base_interfaces_demo__srv__AddInts_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
void
base_interfaces_demo__srv__AddInts_Event__Sequence__destroy(base_interfaces_demo__srv__AddInts_Event__Sequence * array);

/// Check for srv/AddInts message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Event__Sequence__are_equal(const base_interfaces_demo__srv__AddInts_Event__Sequence * lhs, const base_interfaces_demo__srv__AddInts_Event__Sequence * rhs);

/// Copy an array of srv/AddInts messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
bool
base_interfaces_demo__srv__AddInts_Event__Sequence__copy(
  const base_interfaces_demo__srv__AddInts_Event__Sequence * input,
  base_interfaces_demo__srv__AddInts_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__SRV__DETAIL__ADD_INTS__FUNCTIONS_H_
