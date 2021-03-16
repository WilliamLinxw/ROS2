// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/GenericTrajectory.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/generic_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
// Member `cartesian_trajectory`
#include "moveit_msgs/msg/detail/cartesian_trajectory__functions.h"

bool
moveit_msgs__msg__GenericTrajectory__init(moveit_msgs__msg__GenericTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__msg__GenericTrajectory__fini(msg);
    return false;
  }
  // joint_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__Sequence__init(&msg->joint_trajectory, 0)) {
    moveit_msgs__msg__GenericTrajectory__fini(msg);
    return false;
  }
  // cartesian_trajectory
  if (!moveit_msgs__msg__CartesianTrajectory__Sequence__init(&msg->cartesian_trajectory, 0)) {
    moveit_msgs__msg__GenericTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__GenericTrajectory__fini(moveit_msgs__msg__GenericTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_trajectory
  trajectory_msgs__msg__JointTrajectory__Sequence__fini(&msg->joint_trajectory);
  // cartesian_trajectory
  moveit_msgs__msg__CartesianTrajectory__Sequence__fini(&msg->cartesian_trajectory);
}

moveit_msgs__msg__GenericTrajectory *
moveit_msgs__msg__GenericTrajectory__create()
{
  moveit_msgs__msg__GenericTrajectory * msg = (moveit_msgs__msg__GenericTrajectory *)malloc(sizeof(moveit_msgs__msg__GenericTrajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__GenericTrajectory));
  bool success = moveit_msgs__msg__GenericTrajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__GenericTrajectory__destroy(moveit_msgs__msg__GenericTrajectory * msg)
{
  if (msg) {
    moveit_msgs__msg__GenericTrajectory__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__GenericTrajectory__Sequence__init(moveit_msgs__msg__GenericTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__GenericTrajectory * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__GenericTrajectory *)calloc(size, sizeof(moveit_msgs__msg__GenericTrajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__GenericTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__GenericTrajectory__fini(&data[i - 1]);
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
moveit_msgs__msg__GenericTrajectory__Sequence__fini(moveit_msgs__msg__GenericTrajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__GenericTrajectory__fini(&array->data[i]);
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

moveit_msgs__msg__GenericTrajectory__Sequence *
moveit_msgs__msg__GenericTrajectory__Sequence__create(size_t size)
{
  moveit_msgs__msg__GenericTrajectory__Sequence * array = (moveit_msgs__msg__GenericTrajectory__Sequence *)malloc(sizeof(moveit_msgs__msg__GenericTrajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__GenericTrajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__GenericTrajectory__Sequence__destroy(moveit_msgs__msg__GenericTrajectory__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__GenericTrajectory__Sequence__fini(array);
  }
  free(array);
}
