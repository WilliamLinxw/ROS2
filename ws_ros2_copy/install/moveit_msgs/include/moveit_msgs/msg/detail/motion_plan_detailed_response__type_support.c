// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/MotionPlanDetailedResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/motion_plan_detailed_response__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/motion_plan_detailed_response__functions.h"
#include "moveit_msgs/msg/detail/motion_plan_detailed_response__struct.h"


// Include directives for member types
// Member `trajectory_start`
#include "moveit_msgs/msg/robot_state.h"
// Member `trajectory_start`
#include "moveit_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
// Member `group_name`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `trajectory`
#include "moveit_msgs/msg/robot_trajectory.h"
// Member `trajectory`
#include "moveit_msgs/msg/detail/robot_trajectory__rosidl_typesupport_introspection_c.h"
// Member `processing_time`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `error_code`
#include "moveit_msgs/msg/move_it_error_codes.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__MotionPlanDetailedResponse__init(message_memory);
}

void MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_fini_function(void * message_memory)
{
  moveit_msgs__msg__MotionPlanDetailedResponse__fini(message_memory);
}

size_t MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__size_function__RobotTrajectory__trajectory(
  const void * untyped_member)
{
  const moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (const moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__get_const_function__RobotTrajectory__trajectory(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (const moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__get_function__RobotTrajectory__trajectory(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__resize_function__RobotTrajectory__trajectory(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  moveit_msgs__msg__RobotTrajectory__Sequence__fini(member);
  return moveit_msgs__msg__RobotTrajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_message_member_array[6] = {
  {
    "trajectory_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanDetailedResponse, trajectory_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanDetailedResponse, group_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanDetailedResponse, trajectory),  // bytes offset in struct
    NULL,  // default value
    MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__size_function__RobotTrajectory__trajectory,  // size() function pointer
    MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__get_const_function__RobotTrajectory__trajectory,  // get_const(index) function pointer
    MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__get_function__RobotTrajectory__trajectory,  // get(index) function pointer
    MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__resize_function__RobotTrajectory__trajectory  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanDetailedResponse, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "processing_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanDetailedResponse, processing_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanDetailedResponse, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_message_members = {
  "moveit_msgs__msg",  // message namespace
  "MotionPlanDetailedResponse",  // message name
  6,  // number of fields
  sizeof(moveit_msgs__msg__MotionPlanDetailedResponse),
  MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_message_member_array,  // message members
  MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_message_type_support_handle = {
  0,
  &MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MotionPlanDetailedResponse)() {
  MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotState)();
  MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotTrajectory)();
  MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MoveItErrorCodes)();
  if (!MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_message_type_support_handle.typesupport_identifier) {
    MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotionPlanDetailedResponse__rosidl_typesupport_introspection_c__MotionPlanDetailedResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
