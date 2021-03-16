// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:action/Pickup.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/action/detail/pickup__functions.h"
#include "moveit_msgs/action/detail/pickup__struct.h"


// Include directives for member types
// Member `target_name`
// Member `group_name`
// Member `end_effector`
// Member `support_surface_name`
// Member `attached_object_touch_links`
// Member `planner_id`
// Member `allowed_touch_objects`
#include "rosidl_runtime_c/string_functions.h"
// Member `possible_grasps`
#include "moveit_msgs/msg/grasp.h"
// Member `possible_grasps`
#include "moveit_msgs/msg/detail/grasp__rosidl_typesupport_introspection_c.h"
// Member `path_constraints`
#include "moveit_msgs/msg/constraints.h"
// Member `path_constraints`
#include "moveit_msgs/msg/detail/constraints__rosidl_typesupport_introspection_c.h"
// Member `planning_options`
#include "moveit_msgs/msg/planning_options.h"
// Member `planning_options`
#include "moveit_msgs/msg/detail/planning_options__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__Pickup_Goal__init(message_memory);
}

void Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_fini_function(void * message_memory)
{
  moveit_msgs__action__Pickup_Goal__fini(message_memory);
}

size_t Pickup_Goal__rosidl_typesupport_introspection_c__size_function__Grasp__possible_grasps(
  const void * untyped_member)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return member->size;
}

const void * Pickup_Goal__rosidl_typesupport_introspection_c__get_const_function__Grasp__possible_grasps(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Pickup_Goal__rosidl_typesupport_introspection_c__get_function__Grasp__possible_grasps(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Pickup_Goal__rosidl_typesupport_introspection_c__resize_function__Grasp__possible_grasps(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  moveit_msgs__msg__Grasp__Sequence__fini(member);
  return moveit_msgs__msg__Grasp__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_message_member_array[13] = {
  {
    "target_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Goal, target_name),  // bytes offset in struct
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
    offsetof(moveit_msgs__action__Pickup_Goal, group_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_effector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Goal, end_effector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "possible_grasps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Goal, possible_grasps),  // bytes offset in struct
    NULL,  // default value
    Pickup_Goal__rosidl_typesupport_introspection_c__size_function__Grasp__possible_grasps,  // size() function pointer
    Pickup_Goal__rosidl_typesupport_introspection_c__get_const_function__Grasp__possible_grasps,  // get_const(index) function pointer
    Pickup_Goal__rosidl_typesupport_introspection_c__get_function__Grasp__possible_grasps,  // get(index) function pointer
    Pickup_Goal__rosidl_typesupport_introspection_c__resize_function__Grasp__possible_grasps  // resize(index) function pointer
  },
  {
    "support_surface_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Goal, support_surface_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allow_gripper_support_collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Goal, allow_gripper_support_collision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attached_object_touch_links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Goal, attached_object_touch_links),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "minimize_object_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Goal, minimize_object_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Goal, path_constraints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planner_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Goal, planner_id),  // bytes offset in struct
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
    offsetof(moveit_msgs__action__Pickup_Goal, allowed_touch_objects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allowed_planning_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Goal, allowed_planning_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Goal, planning_options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_message_members = {
  "moveit_msgs__action",  // message namespace
  "Pickup_Goal",  // message name
  13,  // number of fields
  sizeof(moveit_msgs__action__Pickup_Goal),
  Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_message_member_array,  // message members
  Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_message_type_support_handle = {
  0,
  &Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_Goal)() {
  Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Grasp)();
  Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Constraints)();
  Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlanningOptions)();
  if (!Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_message_type_support_handle.typesupport_identifier) {
    Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pickup_Goal__rosidl_typesupport_introspection_c__Pickup_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.h"


// Include directives for member types
// Member `error_code`
#include "moveit_msgs/msg/move_it_error_codes.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__rosidl_typesupport_introspection_c.h"
// Member `trajectory_start`
#include "moveit_msgs/msg/robot_state.h"
// Member `trajectory_start`
#include "moveit_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
// Member `trajectory_stages`
#include "moveit_msgs/msg/robot_trajectory.h"
// Member `trajectory_stages`
#include "moveit_msgs/msg/detail/robot_trajectory__rosidl_typesupport_introspection_c.h"
// Member `trajectory_descriptions`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `grasp`
// already included above
// #include "moveit_msgs/msg/grasp.h"
// Member `grasp`
// already included above
// #include "moveit_msgs/msg/detail/grasp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__Pickup_Result__init(message_memory);
}

void Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_fini_function(void * message_memory)
{
  moveit_msgs__action__Pickup_Result__fini(message_memory);
}

size_t Pickup_Result__rosidl_typesupport_introspection_c__size_function__RobotTrajectory__trajectory_stages(
  const void * untyped_member)
{
  const moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (const moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * Pickup_Result__rosidl_typesupport_introspection_c__get_const_function__RobotTrajectory__trajectory_stages(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (const moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Pickup_Result__rosidl_typesupport_introspection_c__get_function__RobotTrajectory__trajectory_stages(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Pickup_Result__rosidl_typesupport_introspection_c__resize_function__RobotTrajectory__trajectory_stages(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  moveit_msgs__msg__RobotTrajectory__Sequence__fini(member);
  return moveit_msgs__msg__RobotTrajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_message_member_array[6] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Result, trajectory_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_stages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Result, trajectory_stages),  // bytes offset in struct
    NULL,  // default value
    Pickup_Result__rosidl_typesupport_introspection_c__size_function__RobotTrajectory__trajectory_stages,  // size() function pointer
    Pickup_Result__rosidl_typesupport_introspection_c__get_const_function__RobotTrajectory__trajectory_stages,  // get_const(index) function pointer
    Pickup_Result__rosidl_typesupport_introspection_c__get_function__RobotTrajectory__trajectory_stages,  // get(index) function pointer
    Pickup_Result__rosidl_typesupport_introspection_c__resize_function__RobotTrajectory__trajectory_stages  // resize(index) function pointer
  },
  {
    "trajectory_descriptions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Result, trajectory_descriptions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Result, grasp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Result, planning_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_message_members = {
  "moveit_msgs__action",  // message namespace
  "Pickup_Result",  // message name
  6,  // number of fields
  sizeof(moveit_msgs__action__Pickup_Result),
  Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_message_member_array,  // message members
  Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_message_type_support_handle = {
  0,
  &Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_Result)() {
  Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MoveItErrorCodes)();
  Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotState)();
  Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotTrajectory)();
  Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Grasp)();
  if (!Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_message_type_support_handle.typesupport_identifier) {
    Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pickup_Result__rosidl_typesupport_introspection_c__Pickup_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.h"


// Include directives for member types
// Member `state`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pickup_Feedback__rosidl_typesupport_introspection_c__Pickup_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__Pickup_Feedback__init(message_memory);
}

void Pickup_Feedback__rosidl_typesupport_introspection_c__Pickup_Feedback_fini_function(void * message_memory)
{
  moveit_msgs__action__Pickup_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pickup_Feedback__rosidl_typesupport_introspection_c__Pickup_Feedback_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_Feedback, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pickup_Feedback__rosidl_typesupport_introspection_c__Pickup_Feedback_message_members = {
  "moveit_msgs__action",  // message namespace
  "Pickup_Feedback",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__action__Pickup_Feedback),
  Pickup_Feedback__rosidl_typesupport_introspection_c__Pickup_Feedback_message_member_array,  // message members
  Pickup_Feedback__rosidl_typesupport_introspection_c__Pickup_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_Feedback__rosidl_typesupport_introspection_c__Pickup_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pickup_Feedback__rosidl_typesupport_introspection_c__Pickup_Feedback_message_type_support_handle = {
  0,
  &Pickup_Feedback__rosidl_typesupport_introspection_c__Pickup_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_Feedback)() {
  if (!Pickup_Feedback__rosidl_typesupport_introspection_c__Pickup_Feedback_message_type_support_handle.typesupport_identifier) {
    Pickup_Feedback__rosidl_typesupport_introspection_c__Pickup_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pickup_Feedback__rosidl_typesupport_introspection_c__Pickup_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "moveit_msgs/action/pickup.h"
// Member `goal`
// already included above
// #include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__Pickup_SendGoal_Request__init(message_memory);
}

void Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_fini_function(void * message_memory)
{
  moveit_msgs__action__Pickup_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_message_members = {
  "moveit_msgs__action",  // message namespace
  "Pickup_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__Pickup_SendGoal_Request),
  Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_message_member_array,  // message members
  Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_message_type_support_handle = {
  0,
  &Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_SendGoal_Request)() {
  Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_Goal)();
  if (!Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pickup_SendGoal_Request__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__Pickup_SendGoal_Response__init(message_memory);
}

void Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_fini_function(void * message_memory)
{
  moveit_msgs__action__Pickup_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_message_members = {
  "moveit_msgs__action",  // message namespace
  "Pickup_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__Pickup_SendGoal_Response),
  Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_message_member_array,  // message members
  Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_message_type_support_handle = {
  0,
  &Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_SendGoal_Response)() {
  Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pickup_SendGoal_Response__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_SendGoal_service_members = {
  "moveit_msgs__action",  // service namespace
  "Pickup_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_SendGoal_service_type_support_handle = {
  0,
  &moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_SendGoal)() {
  if (!moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_SendGoal_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_SendGoal_Response)()->data;
  }

  return &moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__Pickup_GetResult_Request__init(message_memory);
}

void Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_fini_function(void * message_memory)
{
  moveit_msgs__action__Pickup_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_message_members = {
  "moveit_msgs__action",  // message namespace
  "Pickup_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__action__Pickup_GetResult_Request),
  Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_message_member_array,  // message members
  Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_message_type_support_handle = {
  0,
  &Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_GetResult_Request)() {
  Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pickup_GetResult_Request__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "moveit_msgs/action/pickup.h"
// Member `result`
// already included above
// #include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__Pickup_GetResult_Response__init(message_memory);
}

void Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_fini_function(void * message_memory)
{
  moveit_msgs__action__Pickup_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_message_members = {
  "moveit_msgs__action",  // message namespace
  "Pickup_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__Pickup_GetResult_Response),
  Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_message_member_array,  // message members
  Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_message_type_support_handle = {
  0,
  &Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_GetResult_Response)() {
  Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_Result)();
  if (!Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pickup_GetResult_Response__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_GetResult_service_members = {
  "moveit_msgs__action",  // service namespace
  "Pickup_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_GetResult_service_type_support_handle = {
  0,
  &moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_GetResult)() {
  if (!moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_GetResult_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_GetResult_Response)()->data;
  }

  return &moveit_msgs__action__detail__pickup__rosidl_typesupport_introspection_c__Pickup_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__functions.h"
// already included above
// #include "moveit_msgs/action/detail/pickup__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "moveit_msgs/action/pickup.h"
// Member `feedback`
// already included above
// #include "moveit_msgs/action/detail/pickup__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__Pickup_FeedbackMessage__init(message_memory);
}

void Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_fini_function(void * message_memory)
{
  moveit_msgs__action__Pickup_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__Pickup_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_message_members = {
  "moveit_msgs__action",  // message namespace
  "Pickup_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__Pickup_FeedbackMessage),
  Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_message_member_array,  // message members
  Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_message_type_support_handle = {
  0,
  &Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_FeedbackMessage)() {
  Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, Pickup_Feedback)();
  if (!Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pickup_FeedbackMessage__rosidl_typesupport_introspection_c__Pickup_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
