// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from costom_msg:msg/WheelSpeedsStamped.idl
// generated code does not contain a copyright notice

#ifndef COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__FUNCTIONS_H_
#define COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "costom_msg/msg/rosidl_generator_c__visibility_control.h"

#include "costom_msg/msg/detail/wheel_speeds_stamped__struct.h"

/// Initialize msg/WheelSpeedsStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * costom_msg__msg__WheelSpeedsStamped
 * )) before or use
 * costom_msg__msg__WheelSpeedsStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_costom_msg
bool
costom_msg__msg__WheelSpeedsStamped__init(costom_msg__msg__WheelSpeedsStamped * msg);

/// Finalize msg/WheelSpeedsStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_costom_msg
void
costom_msg__msg__WheelSpeedsStamped__fini(costom_msg__msg__WheelSpeedsStamped * msg);

/// Create msg/WheelSpeedsStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * costom_msg__msg__WheelSpeedsStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_costom_msg
costom_msg__msg__WheelSpeedsStamped *
costom_msg__msg__WheelSpeedsStamped__create();

/// Destroy msg/WheelSpeedsStamped message.
/**
 * It calls
 * costom_msg__msg__WheelSpeedsStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_costom_msg
void
costom_msg__msg__WheelSpeedsStamped__destroy(costom_msg__msg__WheelSpeedsStamped * msg);

/// Check for msg/WheelSpeedsStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_costom_msg
bool
costom_msg__msg__WheelSpeedsStamped__are_equal(const costom_msg__msg__WheelSpeedsStamped * lhs, const costom_msg__msg__WheelSpeedsStamped * rhs);

/// Copy a msg/WheelSpeedsStamped message.
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
ROSIDL_GENERATOR_C_PUBLIC_costom_msg
bool
costom_msg__msg__WheelSpeedsStamped__copy(
  const costom_msg__msg__WheelSpeedsStamped * input,
  costom_msg__msg__WheelSpeedsStamped * output);

/// Initialize array of msg/WheelSpeedsStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * costom_msg__msg__WheelSpeedsStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_costom_msg
bool
costom_msg__msg__WheelSpeedsStamped__Sequence__init(costom_msg__msg__WheelSpeedsStamped__Sequence * array, size_t size);

/// Finalize array of msg/WheelSpeedsStamped messages.
/**
 * It calls
 * costom_msg__msg__WheelSpeedsStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_costom_msg
void
costom_msg__msg__WheelSpeedsStamped__Sequence__fini(costom_msg__msg__WheelSpeedsStamped__Sequence * array);

/// Create array of msg/WheelSpeedsStamped messages.
/**
 * It allocates the memory for the array and calls
 * costom_msg__msg__WheelSpeedsStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_costom_msg
costom_msg__msg__WheelSpeedsStamped__Sequence *
costom_msg__msg__WheelSpeedsStamped__Sequence__create(size_t size);

/// Destroy array of msg/WheelSpeedsStamped messages.
/**
 * It calls
 * costom_msg__msg__WheelSpeedsStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_costom_msg
void
costom_msg__msg__WheelSpeedsStamped__Sequence__destroy(costom_msg__msg__WheelSpeedsStamped__Sequence * array);

/// Check for msg/WheelSpeedsStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_costom_msg
bool
costom_msg__msg__WheelSpeedsStamped__Sequence__are_equal(const costom_msg__msg__WheelSpeedsStamped__Sequence * lhs, const costom_msg__msg__WheelSpeedsStamped__Sequence * rhs);

/// Copy an array of msg/WheelSpeedsStamped messages.
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
ROSIDL_GENERATOR_C_PUBLIC_costom_msg
bool
costom_msg__msg__WheelSpeedsStamped__Sequence__copy(
  const costom_msg__msg__WheelSpeedsStamped__Sequence * input,
  costom_msg__msg__WheelSpeedsStamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__FUNCTIONS_H_
