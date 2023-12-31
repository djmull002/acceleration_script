// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from costom_msg:msg/WheelSpeedsStamped.idl
// generated code does not contain a copyright notice

#ifndef COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__STRUCT_H_
#define COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/WheelSpeedsStamped in the package costom_msg.
typedef struct costom_msg__msg__WheelSpeedsStamped
{
  double speeds;
} costom_msg__msg__WheelSpeedsStamped;

// Struct for a sequence of costom_msg__msg__WheelSpeedsStamped.
typedef struct costom_msg__msg__WheelSpeedsStamped__Sequence
{
  costom_msg__msg__WheelSpeedsStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} costom_msg__msg__WheelSpeedsStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__STRUCT_H_
