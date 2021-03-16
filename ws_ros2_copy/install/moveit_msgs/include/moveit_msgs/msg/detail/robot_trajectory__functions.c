// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `joint_trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
// Member `multi_dof_joint_trajectory`
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__functions.h"

bool
moveit_msgs__msg__RobotTrajectory__init(moveit_msgs__msg__RobotTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // joint_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->joint_trajectory)) {
    moveit_msgs__msg__RobotTrajectory__fini(msg);
    return false;
  }
  // multi_dof_joint_trajectory
  if (!trajectory_msgs__msg__MultiDOFJointTrajectory__init(&msg->multi_dof_joint_trajectory)) {
    moveit_msgs__msg__RobotTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__RobotTrajectory__fini(moveit_msgs__msg__RobotTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // joint_trajectory
  trajectory_msgs__msg__JointTrajectory__fini(&msg->joint_trajectory);
  // multi_dof_joint_trajectory
  trajectory_msgs__msg__MultiDOFJointTrajectory__fini(&msg->multi_dof_joint_trajectory);
}

moveit_msgs__msg__RobotTrajectory *
moveit_msgs__msg__RobotTrajectory__create()
{
  moveit_msgs__msg__RobotTrajectory * msg = (moveit_msgs__msg__RobotTrajectory *)malloc(sizeof(moveit_msgs__msg__RobotTrajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__RobotTrajectory));
  bool success = moveit_msgs__msg__RobotTrajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__RobotTrajectory__destroy(moveit_msgs__msg__RobotTrajectory * msg)
{
  if (msg) {
    moveit_msgs__msg__RobotTrajectory__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__RobotTrajectory__Sequence__init(moveit_msgs__msg__RobotTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__RobotTrajectory * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__RobotTrajectory *)calloc(size, sizeof(moveit_msgs__msg__RobotTrajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__RobotTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__RobotTrajectory__fini(&data[i - 1]);
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
moveit_msgs__msg__RobotTrajectory__Sequence__fini(moveit_msgs__msg__RobotTrajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__RobotTrajectory__fini(&array->data[i]);
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

moveit_msgs__msg__RobotTrajectory__Sequence *
moveit_msgs__msg__RobotTrajectory__Sequence__create(size_t size)
{
  moveit_msgs__msg__RobotTrajectory__Sequence * array = (moveit_msgs__msg__RobotTrajectory__Sequence *)malloc(sizeof(moveit_msgs__msg__RobotTrajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__RobotTrajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__RobotTrajectory__Sequence__destroy(moveit_msgs__msg__RobotTrajectory__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__RobotTrajectory__Sequence__fini(array);
  }
  free(array);
}
