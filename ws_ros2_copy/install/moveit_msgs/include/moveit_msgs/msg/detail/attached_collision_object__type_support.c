// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/AttachedCollisionObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/attached_collision_object__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/attached_collision_object__functions.h"
#include "moveit_msgs/msg/detail/attached_collision_object__struct.h"


// Include directives for member types
// Member `link_name`
// Member `touch_links`
#include "rosidl_runtime_c/string_functions.h"
// Member `object`
#include "moveit_msgs/msg/collision_object.h"
// Member `object`
#include "moveit_msgs/msg/detail/collision_object__rosidl_typesupport_introspection_c.h"
// Member `detach_posture`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `detach_posture`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__AttachedCollisionObject__init(message_memory);
}

void AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_fini_function(void * message_memory)
{
  moveit_msgs__msg__AttachedCollisionObject__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_message_member_array[5] = {
  {
    "link_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AttachedCollisionObject, link_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AttachedCollisionObject, object),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "touch_links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AttachedCollisionObject, touch_links),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detach_posture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AttachedCollisionObject, detach_posture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AttachedCollisionObject, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_message_members = {
  "moveit_msgs__msg",  // message namespace
  "AttachedCollisionObject",  // message name
  5,  // number of fields
  sizeof(moveit_msgs__msg__AttachedCollisionObject),
  AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_message_member_array,  // message members
  AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_init_function,  // function to initialize message memory (memory has to be allocated)
  AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_message_type_support_handle = {
  0,
  &AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, AttachedCollisionObject)() {
  AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CollisionObject)();
  AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  if (!AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_message_type_support_handle.typesupport_identifier) {
    AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AttachedCollisionObject__rosidl_typesupport_introspection_c__AttachedCollisionObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
