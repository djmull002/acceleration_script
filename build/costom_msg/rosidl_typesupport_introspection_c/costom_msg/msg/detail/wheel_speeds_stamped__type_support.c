// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from costom_msg:msg/WheelSpeedsStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "costom_msg/msg/detail/wheel_speeds_stamped__rosidl_typesupport_introspection_c.h"
#include "costom_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "costom_msg/msg/detail/wheel_speeds_stamped__functions.h"
#include "costom_msg/msg/detail/wheel_speeds_stamped__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void WheelSpeedsStamped__rosidl_typesupport_introspection_c__WheelSpeedsStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  costom_msg__msg__WheelSpeedsStamped__init(message_memory);
}

void WheelSpeedsStamped__rosidl_typesupport_introspection_c__WheelSpeedsStamped_fini_function(void * message_memory)
{
  costom_msg__msg__WheelSpeedsStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WheelSpeedsStamped__rosidl_typesupport_introspection_c__WheelSpeedsStamped_message_member_array[1] = {
  {
    "speeds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(costom_msg__msg__WheelSpeedsStamped, speeds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WheelSpeedsStamped__rosidl_typesupport_introspection_c__WheelSpeedsStamped_message_members = {
  "costom_msg__msg",  // message namespace
  "WheelSpeedsStamped",  // message name
  1,  // number of fields
  sizeof(costom_msg__msg__WheelSpeedsStamped),
  WheelSpeedsStamped__rosidl_typesupport_introspection_c__WheelSpeedsStamped_message_member_array,  // message members
  WheelSpeedsStamped__rosidl_typesupport_introspection_c__WheelSpeedsStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelSpeedsStamped__rosidl_typesupport_introspection_c__WheelSpeedsStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WheelSpeedsStamped__rosidl_typesupport_introspection_c__WheelSpeedsStamped_message_type_support_handle = {
  0,
  &WheelSpeedsStamped__rosidl_typesupport_introspection_c__WheelSpeedsStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_costom_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, costom_msg, msg, WheelSpeedsStamped)() {
  if (!WheelSpeedsStamped__rosidl_typesupport_introspection_c__WheelSpeedsStamped_message_type_support_handle.typesupport_identifier) {
    WheelSpeedsStamped__rosidl_typesupport_introspection_c__WheelSpeedsStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WheelSpeedsStamped__rosidl_typesupport_introspection_c__WheelSpeedsStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
