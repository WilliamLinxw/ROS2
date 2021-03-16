// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/MotionPlanRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'workspace_parameters'
#include "moveit_msgs/msg/detail/workspace_parameters__struct.h"
// Member 'start_state'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'goal_constraints'
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__struct.h"
// Member 'trajectory_constraints'
#include "moveit_msgs/msg/detail/trajectory_constraints__struct.h"
// Member 'reference_trajectories'
#include "moveit_msgs/msg/detail/generic_trajectory__struct.h"
// Member 'planner_id'
// Member 'group_name'
// Member 'cartesian_speed_end_effector_link'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MotionPlanRequest in the package moveit_msgs.
typedef struct moveit_msgs__msg__MotionPlanRequest
{
  moveit_msgs__msg__WorkspaceParameters workspace_parameters;
  moveit_msgs__msg__RobotState start_state;
  moveit_msgs__msg__Constraints__Sequence goal_constraints;
  moveit_msgs__msg__Constraints path_constraints;
  moveit_msgs__msg__TrajectoryConstraints trajectory_constraints;
  moveit_msgs__msg__GenericTrajectory__Sequence reference_trajectories;
  rosidl_runtime_c__String planner_id;
  rosidl_runtime_c__String group_name;
  int32_t num_planning_attempts;
  double allowed_planning_time;
  double max_velocity_scaling_factor;
  double max_acceleration_scaling_factor;
  rosidl_runtime_c__String cartesian_speed_end_effector_link;
  double max_cartesian_speed;
} moveit_msgs__msg__MotionPlanRequest;

// Struct for a sequence of moveit_msgs__msg__MotionPlanRequest.
typedef struct moveit_msgs__msg__MotionPlanRequest__Sequence
{
  moveit_msgs__msg__MotionPlanRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__MotionPlanRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__STRUCT_H_
