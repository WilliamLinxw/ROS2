// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/PlaceLocation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/place_location__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/place_location__functions.h"
#include "moveit_msgs/msg/detail/place_location__struct.h"


// Include directives for member types
// Member `id`
// Member `allowed_touch_objects`
#include "rosidl_runtime_c/string_functions.h"
// Member `post_place_posture`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `post_place_posture`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
// Member `place_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `place_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `pre_place_approach`
// Member `post_place_retreat`
#include "moveit_msgs/msg/gripper_translation.h"
// Member `pre_place_approach`
// Member `post_place_retreat`
#include "moveit_msgs/msg/detail/gripper_translation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__PlaceLocation__init(message_memory);
}

void PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_fini_function(void * message_memory)
{
  moveit_msgs__msg__PlaceLocation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_message_member_array[7] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlaceLocation, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "post_place_posture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlaceLocation, post_place_posture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "place_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlaceLocation, place_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlaceLocation, quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pre_place_approach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlaceLocation, pre_place_approach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "post_place_retreat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlaceLocation, post_place_retreat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allowed_touch_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlaceLocation, allowed_touch_objects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_message_members = {
  "moveit_msgs__msg",  // message namespace
  "PlaceLocation",  // message name
  7,  // number of fields
  sizeof(moveit_msgs__msg__PlaceLocation),
  PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_message_member_array,  // message members
  PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_init_function,  // function to initialize message memory (memory has to be allocated)
  PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_message_type_support_handle = {
  0,
  &PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlaceLocation)() {
  PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, GripperTranslation)();
  PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, GripperTranslation)();
  if (!PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_message_type_support_handle.typesupport_identifier) {
    PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PlaceLocation__rosidl_typesupport_introspection_c__PlaceLocation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
