// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/MotionSequenceResponse.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/motion_sequence_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"
// Member `sequence_start`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `planned_trajectories`
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"

bool
moveit_msgs__msg__MotionSequenceResponse__init(moveit_msgs__msg__MotionSequenceResponse * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__msg__MotionSequenceResponse__fini(msg);
    return false;
  }
  // sequence_start
  if (!moveit_msgs__msg__RobotState__init(&msg->sequence_start)) {
    moveit_msgs__msg__MotionSequenceResponse__fini(msg);
    return false;
  }
  // planned_trajectories
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__init(&msg->planned_trajectories, 0)) {
    moveit_msgs__msg__MotionSequenceResponse__fini(msg);
    return false;
  }
  // planning_time
  return true;
}

void
moveit_msgs__msg__MotionSequenceResponse__fini(moveit_msgs__msg__MotionSequenceResponse * msg)
{
  if (!msg) {
    return;
  }
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
  // sequence_start
  moveit_msgs__msg__RobotState__fini(&msg->sequence_start);
  // planned_trajectories
  moveit_msgs__msg__RobotTrajectory__Sequence__fini(&msg->planned_trajectories);
  // planning_time
}

moveit_msgs__msg__MotionSequenceResponse *
moveit_msgs__msg__MotionSequenceResponse__create()
{
  moveit_msgs__msg__MotionSequenceResponse * msg = (moveit_msgs__msg__MotionSequenceResponse *)malloc(sizeof(moveit_msgs__msg__MotionSequenceResponse));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__MotionSequenceResponse));
  bool success = moveit_msgs__msg__MotionSequenceResponse__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__MotionSequenceResponse__destroy(moveit_msgs__msg__MotionSequenceResponse * msg)
{
  if (msg) {
    moveit_msgs__msg__MotionSequenceResponse__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__MotionSequenceResponse__Sequence__init(moveit_msgs__msg__MotionSequenceResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__MotionSequenceResponse * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__MotionSequenceResponse *)calloc(size, sizeof(moveit_msgs__msg__MotionSequenceResponse));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__MotionSequenceResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__MotionSequenceResponse__fini(&data[i - 1]);
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
moveit_msgs__msg__MotionSequenceResponse__Sequence__fini(moveit_msgs__msg__MotionSequenceResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__MotionSequenceResponse__fini(&array->data[i]);
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

moveit_msgs__msg__MotionSequenceResponse__Sequence *
moveit_msgs__msg__MotionSequenceResponse__Sequence__create(size_t size)
{
  moveit_msgs__msg__MotionSequenceResponse__Sequence * array = (moveit_msgs__msg__MotionSequenceResponse__Sequence *)malloc(sizeof(moveit_msgs__msg__MotionSequenceResponse__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__MotionSequenceResponse__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__MotionSequenceResponse__Sequence__destroy(moveit_msgs__msg__MotionSequenceResponse__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__MotionSequenceResponse__Sequence__fini(array);
  }
  free(array);
}
