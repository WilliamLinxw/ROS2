// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PlanningOptions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'planning_scene_diff'
#include "moveit_msgs/msg/detail/planning_scene__struct.h"

// Struct defined in msg/PlanningOptions in the package moveit_msgs.
typedef struct moveit_msgs__msg__PlanningOptions
{
  moveit_msgs__msg__PlanningScene planning_scene_diff;
  bool plan_only;
  bool look_around;
  int32_t look_around_attempts;
  double max_safe_execution_cost;
  bool replan;
  int32_t replan_attempts;
  double replan_delay;
} moveit_msgs__msg__PlanningOptions;

// Struct for a sequence of moveit_msgs__msg__PlanningOptions.
typedef struct moveit_msgs__msg__PlanningOptions__Sequence
{
  moveit_msgs__msg__PlanningOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PlanningOptions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_OPTIONS__STRUCT_H_
