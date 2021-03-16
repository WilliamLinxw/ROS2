// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/cartesian_trajectory_point__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/cartesian_trajectory_point__functions.h"
#include "moveit_msgs/msg/detail/cartesian_trajectory_point__struct.h"


// Include directives for member types
// Member `point`
#include "moveit_msgs/msg/cartesian_point.h"
// Member `point`
#include "moveit_msgs/msg/detail/cartesian_point__rosidl_typesupport_introspection_c.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/duration.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__CartesianTrajectoryPoint__init(message_memory);
}

void CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_fini_function(void * message_memory)
{
  moveit_msgs__msg__CartesianTrajectoryPoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_member_array[2] = {
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CartesianTrajectoryPoint, point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_from_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CartesianTrajectoryPoint, time_from_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_members = {
  "moveit_msgs__msg",  // message namespace
  "CartesianTrajectoryPoint",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__msg__CartesianTrajectoryPoint),
  CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_member_array,  // message members
  CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_type_support_handle = {
  0,
  &CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CartesianTrajectoryPoint)() {
  CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CartesianPoint)();
  CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_type_support_handle.typesupport_identifier) {
    CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianTrajectoryPoint__rosidl_typesupport_introspection_c__CartesianTrajectoryPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
