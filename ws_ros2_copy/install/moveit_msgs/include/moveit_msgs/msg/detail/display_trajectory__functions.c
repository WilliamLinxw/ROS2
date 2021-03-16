// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/DisplayTrajectory.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/display_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `model_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `trajectory`
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"
// Member `trajectory_start`
#include "moveit_msgs/msg/detail/robot_state__functions.h"

bool
moveit_msgs__msg__DisplayTrajectory__init(moveit_msgs__msg__DisplayTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // model_id
  if (!rosidl_runtime_c__String__init(&msg->model_id)) {
    moveit_msgs__msg__DisplayTrajectory__fini(msg);
    return false;
  }
  // trajectory
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__init(&msg->trajectory, 0)) {
    moveit_msgs__msg__DisplayTrajectory__fini(msg);
    return false;
  }
  // trajectory_start
  if (!moveit_msgs__msg__RobotState__init(&msg->trajectory_start)) {
    moveit_msgs__msg__DisplayTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__DisplayTrajectory__fini(moveit_msgs__msg__DisplayTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // model_id
  rosidl_runtime_c__String__fini(&msg->model_id);
  // trajectory
  moveit_msgs__msg__RobotTrajectory__Sequence__fini(&msg->trajectory);
  // trajectory_start
  moveit_msgs__msg__RobotState__fini(&msg->trajectory_start);
}

moveit_msgs__msg__DisplayTrajectory *
moveit_msgs__msg__DisplayTrajectory__create()
{
  moveit_msgs__msg__DisplayTrajectory * msg = (moveit_msgs__msg__DisplayTrajectory *)malloc(sizeof(moveit_msgs__msg__DisplayTrajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__DisplayTrajectory));
  bool success = moveit_msgs__msg__DisplayTrajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__DisplayTrajectory__destroy(moveit_msgs__msg__DisplayTrajectory * msg)
{
  if (msg) {
    moveit_msgs__msg__DisplayTrajectory__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__DisplayTrajectory__Sequence__init(moveit_msgs__msg__DisplayTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__DisplayTrajectory * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__DisplayTrajectory *)calloc(size, sizeof(moveit_msgs__msg__DisplayTrajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__DisplayTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__DisplayTrajectory__fini(&data[i - 1]);
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
moveit_msgs__msg__DisplayTrajectory__Sequence__fini(moveit_msgs__msg__DisplayTrajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__DisplayTrajectory__fini(&array->data[i]);
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

moveit_msgs__msg__DisplayTrajectory__Sequence *
moveit_msgs__msg__DisplayTrajectory__Sequence__create(size_t size)
{
  moveit_msgs__msg__DisplayTrajectory__Sequence * array = (moveit_msgs__msg__DisplayTrajectory__Sequence *)malloc(sizeof(moveit_msgs__msg__DisplayTrajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__DisplayTrajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__DisplayTrajectory__Sequence__destroy(moveit_msgs__msg__DisplayTrajectory__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__DisplayTrajectory__Sequence__fini(array);
  }
  free(array);
}
