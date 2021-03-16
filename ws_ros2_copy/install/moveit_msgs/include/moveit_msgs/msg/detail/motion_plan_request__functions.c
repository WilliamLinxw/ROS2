// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/MotionPlanRequest.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/motion_plan_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `workspace_parameters`
#include "moveit_msgs/msg/detail/workspace_parameters__functions.h"
// Member `start_state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `goal_constraints`
// Member `path_constraints`
#include "moveit_msgs/msg/detail/constraints__functions.h"
// Member `trajectory_constraints`
#include "moveit_msgs/msg/detail/trajectory_constraints__functions.h"
// Member `reference_trajectories`
#include "moveit_msgs/msg/detail/generic_trajectory__functions.h"
// Member `planner_id`
// Member `group_name`
// Member `cartesian_speed_end_effector_link`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__msg__MotionPlanRequest__init(moveit_msgs__msg__MotionPlanRequest * msg)
{
  if (!msg) {
    return false;
  }
  // workspace_parameters
  if (!moveit_msgs__msg__WorkspaceParameters__init(&msg->workspace_parameters)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // start_state
  if (!moveit_msgs__msg__RobotState__init(&msg->start_state)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // goal_constraints
  if (!moveit_msgs__msg__Constraints__Sequence__init(&msg->goal_constraints, 0)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // path_constraints
  if (!moveit_msgs__msg__Constraints__init(&msg->path_constraints)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // trajectory_constraints
  if (!moveit_msgs__msg__TrajectoryConstraints__init(&msg->trajectory_constraints)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // reference_trajectories
  if (!moveit_msgs__msg__GenericTrajectory__Sequence__init(&msg->reference_trajectories, 0)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // planner_id
  if (!rosidl_runtime_c__String__init(&msg->planner_id)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // num_planning_attempts
  // allowed_planning_time
  // max_velocity_scaling_factor
  // max_acceleration_scaling_factor
  // cartesian_speed_end_effector_link
  if (!rosidl_runtime_c__String__init(&msg->cartesian_speed_end_effector_link)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // max_cartesian_speed
  return true;
}

void
moveit_msgs__msg__MotionPlanRequest__fini(moveit_msgs__msg__MotionPlanRequest * msg)
{
  if (!msg) {
    return;
  }
  // workspace_parameters
  moveit_msgs__msg__WorkspaceParameters__fini(&msg->workspace_parameters);
  // start_state
  moveit_msgs__msg__RobotState__fini(&msg->start_state);
  // goal_constraints
  moveit_msgs__msg__Constraints__Sequence__fini(&msg->goal_constraints);
  // path_constraints
  moveit_msgs__msg__Constraints__fini(&msg->path_constraints);
  // trajectory_constraints
  moveit_msgs__msg__TrajectoryConstraints__fini(&msg->trajectory_constraints);
  // reference_trajectories
  moveit_msgs__msg__GenericTrajectory__Sequence__fini(&msg->reference_trajectories);
  // planner_id
  rosidl_runtime_c__String__fini(&msg->planner_id);
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // num_planning_attempts
  // allowed_planning_time
  // max_velocity_scaling_factor
  // max_acceleration_scaling_factor
  // cartesian_speed_end_effector_link
  rosidl_runtime_c__String__fini(&msg->cartesian_speed_end_effector_link);
  // max_cartesian_speed
}

moveit_msgs__msg__MotionPlanRequest *
moveit_msgs__msg__MotionPlanRequest__create()
{
  moveit_msgs__msg__MotionPlanRequest * msg = (moveit_msgs__msg__MotionPlanRequest *)malloc(sizeof(moveit_msgs__msg__MotionPlanRequest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__MotionPlanRequest));
  bool success = moveit_msgs__msg__MotionPlanRequest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__MotionPlanRequest__destroy(moveit_msgs__msg__MotionPlanRequest * msg)
{
  if (msg) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__MotionPlanRequest__Sequence__init(moveit_msgs__msg__MotionPlanRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__MotionPlanRequest * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__MotionPlanRequest *)calloc(size, sizeof(moveit_msgs__msg__MotionPlanRequest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__MotionPlanRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__MotionPlanRequest__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__msg__MotionPlanRequest__Sequence__fini(moveit_msgs__msg__MotionPlanRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__MotionPlanRequest__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__msg__MotionPlanRequest__Sequence *
moveit_msgs__msg__MotionPlanRequest__Sequence__create(size_t size)
{
  moveit_msgs__msg__MotionPlanRequest__Sequence * array = (moveit_msgs__msg__MotionPlanRequest__Sequence *)malloc(sizeof(moveit_msgs__msg__MotionPlanRequest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__MotionPlanRequest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__MotionPlanRequest__Sequence__destroy(moveit_msgs__msg__MotionPlanRequest__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__MotionPlanRequest__Sequence__fini(array);
  }
  free(array);
}
