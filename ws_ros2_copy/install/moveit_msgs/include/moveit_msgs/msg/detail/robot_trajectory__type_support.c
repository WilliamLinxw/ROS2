// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/robot_trajectory__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"


// Include directives for member types
// Member `joint_trajectory`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `joint_trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
// Member `multi_dof_joint_trajectory`
#include "trajectory_msgs/msg/multi_dof_joint_trajectory.h"
// Member `multi_dof_joint_trajectory`
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__RobotTrajectory__init(message_memory);
}

void RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_fini_function(void * message_memory)
{
  moveit_msgs__msg__RobotTrajectory__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_message_member_array[2] = {
  {
    "joint_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__RobotTrajectory, joint_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi_dof_joint_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__RobotTrajectory, multi_dof_joint_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_message_members = {
  "moveit_msgs__msg",  // message namespace
  "RobotTrajectory",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__msg__RobotTrajectory),
  RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_message_member_array,  // message members
  RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_message_type_support_handle = {
  0,
  &RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotTrajectory)() {
  RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, MultiDOFJointTrajectory)();
  if (!RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_message_type_support_handle.typesupport_identifier) {
    RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotTrajectory__rosidl_typesupport_introspection_c__RobotTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
