// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/MotionPlanResponse.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/motion_plan_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `trajectory_start`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `group_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `trajectory`
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"

bool
moveit_msgs__msg__MotionPlanResponse__init(moveit_msgs__msg__MotionPlanResponse * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory_start
  if (!moveit_msgs__msg__RobotState__init(&msg->trajectory_start)) {
    moveit_msgs__msg__MotionPlanResponse__fini(msg);
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    moveit_msgs__msg__MotionPlanResponse__fini(msg);
    return false;
  }
  // trajectory
  if (!moveit_msgs__msg__RobotTrajectory__init(&msg->trajectory)) {
    moveit_msgs__msg__MotionPlanResponse__fini(msg);
    return false;
  }
  // planning_time
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__msg__MotionPlanResponse__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__MotionPlanResponse__fini(moveit_msgs__msg__MotionPlanResponse * msg)
{
  if (!msg) {
    return;
  }
  // trajectory_start
  moveit_msgs__msg__RobotState__fini(&msg->trajectory_start);
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // trajectory
  moveit_msgs__msg__RobotTrajectory__fini(&msg->trajectory);
  // planning_time
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
}

moveit_msgs__msg__MotionPlanResponse *
moveit_msgs__msg__MotionPlanResponse__create()
{
  moveit_msgs__msg__MotionPlanResponse * msg = (moveit_msgs__msg__MotionPlanResponse *)malloc(sizeof(moveit_msgs__msg__MotionPlanResponse));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__MotionPlanResponse));
  bool success = moveit_msgs__msg__MotionPlanResponse__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__MotionPlanResponse__destroy(moveit_msgs__msg__MotionPlanResponse * msg)
{
  if (msg) {
    moveit_msgs__msg__MotionPlanResponse__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__MotionPlanResponse__Sequence__init(moveit_msgs__msg__MotionPlanResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__MotionPlanResponse * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__MotionPlanResponse *)calloc(size, sizeof(moveit_msgs__msg__MotionPlanResponse));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__MotionPlanResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__MotionPlanResponse__fini(&data[i - 1]);
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
moveit_msgs__msg__MotionPlanResponse__Sequence__fini(moveit_msgs__msg__MotionPlanResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__MotionPlanResponse__fini(&array->data[i]);
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

moveit_msgs__msg__MotionPlanResponse__Sequence *
moveit_msgs__msg__MotionPlanResponse__Sequence__create(size_t size)
{
  moveit_msgs__msg__MotionPlanResponse__Sequence * array = (moveit_msgs__msg__MotionPlanResponse__Sequence *)malloc(sizeof(moveit_msgs__msg__MotionPlanResponse__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__MotionPlanResponse__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__MotionPlanResponse__Sequence__destroy(moveit_msgs__msg__MotionPlanResponse__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__MotionPlanResponse__Sequence__fini(array);
  }
  free(array);
}
