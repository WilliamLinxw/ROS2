// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/CartesianPoint.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/cartesian_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `acceleration`
#include "geometry_msgs/msg/detail/accel__functions.h"

bool
moveit_msgs__msg__CartesianPoint__init(moveit_msgs__msg__CartesianPoint * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    moveit_msgs__msg__CartesianPoint__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    moveit_msgs__msg__CartesianPoint__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__init(&msg->acceleration)) {
    moveit_msgs__msg__CartesianPoint__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__CartesianPoint__fini(moveit_msgs__msg__CartesianPoint * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
  // acceleration
  geometry_msgs__msg__Accel__fini(&msg->acceleration);
}

moveit_msgs__msg__CartesianPoint *
moveit_msgs__msg__CartesianPoint__create()
{
  moveit_msgs__msg__CartesianPoint * msg = (moveit_msgs__msg__CartesianPoint *)malloc(sizeof(moveit_msgs__msg__CartesianPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__CartesianPoint));
  bool success = moveit_msgs__msg__CartesianPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__CartesianPoint__destroy(moveit_msgs__msg__CartesianPoint * msg)
{
  if (msg) {
    moveit_msgs__msg__CartesianPoint__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__CartesianPoint__Sequence__init(moveit_msgs__msg__CartesianPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__CartesianPoint * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__CartesianPoint *)calloc(size, sizeof(moveit_msgs__msg__CartesianPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__CartesianPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__CartesianPoint__fini(&data[i - 1]);
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
moveit_msgs__msg__CartesianPoint__Sequence__fini(moveit_msgs__msg__CartesianPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__CartesianPoint__fini(&array->data[i]);
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

moveit_msgs__msg__CartesianPoint__Sequence *
moveit_msgs__msg__CartesianPoint__Sequence__create(size_t size)
{
  moveit_msgs__msg__CartesianPoint__Sequence * array = (moveit_msgs__msg__CartesianPoint__Sequence *)malloc(sizeof(moveit_msgs__msg__CartesianPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__CartesianPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__CartesianPoint__Sequence__destroy(moveit_msgs__msg__CartesianPoint__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__CartesianPoint__Sequence__fini(array);
  }
  free(array);
}
