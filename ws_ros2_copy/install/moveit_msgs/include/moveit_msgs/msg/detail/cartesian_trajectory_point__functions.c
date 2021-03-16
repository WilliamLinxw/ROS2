// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/cartesian_trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `point`
#include "moveit_msgs/msg/detail/cartesian_point__functions.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
moveit_msgs__msg__CartesianTrajectoryPoint__init(moveit_msgs__msg__CartesianTrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!moveit_msgs__msg__CartesianPoint__init(&msg->point)) {
    moveit_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__init(&msg->time_from_start)) {
    moveit_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__CartesianTrajectoryPoint__fini(moveit_msgs__msg__CartesianTrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // point
  moveit_msgs__msg__CartesianPoint__fini(&msg->point);
  // time_from_start
  builtin_interfaces__msg__Duration__fini(&msg->time_from_start);
}

moveit_msgs__msg__CartesianTrajectoryPoint *
moveit_msgs__msg__CartesianTrajectoryPoint__create()
{
  moveit_msgs__msg__CartesianTrajectoryPoint * msg = (moveit_msgs__msg__CartesianTrajectoryPoint *)malloc(sizeof(moveit_msgs__msg__CartesianTrajectoryPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__CartesianTrajectoryPoint));
  bool success = moveit_msgs__msg__CartesianTrajectoryPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__CartesianTrajectoryPoint__destroy(moveit_msgs__msg__CartesianTrajectoryPoint * msg)
{
  if (msg) {
    moveit_msgs__msg__CartesianTrajectoryPoint__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__init(moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__CartesianTrajectoryPoint * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__CartesianTrajectoryPoint *)calloc(size, sizeof(moveit_msgs__msg__CartesianTrajectoryPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__CartesianTrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__CartesianTrajectoryPoint__fini(&data[i - 1]);
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
moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__CartesianTrajectoryPoint__fini(&array->data[i]);
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

moveit_msgs__msg__CartesianTrajectoryPoint__Sequence *
moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__create(size_t size)
{
  moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * array = (moveit_msgs__msg__CartesianTrajectoryPoint__Sequence *)malloc(sizeof(moveit_msgs__msg__CartesianTrajectoryPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__destroy(moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(array);
  }
  free(array);
}
