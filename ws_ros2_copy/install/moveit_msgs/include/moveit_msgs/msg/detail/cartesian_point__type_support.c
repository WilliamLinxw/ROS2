// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/CartesianPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/cartesian_point__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/cartesian_point__functions.h"
#include "moveit_msgs/msg/detail/cartesian_point__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `velocity`
#include "geometry_msgs/msg/twist.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `acceleration`
#include "geometry_msgs/msg/accel.h"
// Member `acceleration`
#include "geometry_msgs/msg/detail/accel__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__CartesianPoint__init(message_memory);
}

void CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_fini_function(void * message_memory)
{
  moveit_msgs__msg__CartesianPoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_member_array[3] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CartesianPoint, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CartesianPoint, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CartesianPoint, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_members = {
  "moveit_msgs__msg",  // message namespace
  "CartesianPoint",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__msg__CartesianPoint),
  CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_member_array,  // message members
  CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_type_support_handle = {
  0,
  &CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CartesianPoint)() {
  CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Accel)();
  if (!CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_type_support_handle.typesupport_identifier) {
    CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
