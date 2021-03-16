// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__functions.h"
// Member `multi_dof_joint_state`
#include "sensor_msgs/msg/detail/multi_dof_joint_state__functions.h"
// Member `attached_collision_objects`
#include "moveit_msgs/msg/detail/attached_collision_object__functions.h"

bool
moveit_msgs__msg__RobotState__init(moveit_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__init(&msg->joint_state)) {
    moveit_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // multi_dof_joint_state
  if (!sensor_msgs__msg__MultiDOFJointState__init(&msg->multi_dof_joint_state)) {
    moveit_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // attached_collision_objects
  if (!moveit_msgs__msg__AttachedCollisionObject__Sequence__init(&msg->attached_collision_objects, 0)) {
    moveit_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // is_diff
  return true;
}

void
moveit_msgs__msg__RobotState__fini(moveit_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // joint_state
  sensor_msgs__msg__JointState__fini(&msg->joint_state);
  // multi_dof_joint_state
  sensor_msgs__msg__MultiDOFJointState__fini(&msg->multi_dof_joint_state);
  // attached_collision_objects
  moveit_msgs__msg__AttachedCollisionObject__Sequence__fini(&msg->attached_collision_objects);
  // is_diff
}

moveit_msgs__msg__RobotState *
moveit_msgs__msg__RobotState__create()
{
  moveit_msgs__msg__RobotState * msg = (moveit_msgs__msg__RobotState *)malloc(sizeof(moveit_msgs__msg__RobotState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__RobotState));
  bool success = moveit_msgs__msg__RobotState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__RobotState__destroy(moveit_msgs__msg__RobotState * msg)
{
  if (msg) {
    moveit_msgs__msg__RobotState__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__RobotState__Sequence__init(moveit_msgs__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__RobotState * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__RobotState *)calloc(size, sizeof(moveit_msgs__msg__RobotState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__RobotState__fini(&data[i - 1]);
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
moveit_msgs__msg__RobotState__Sequence__fini(moveit_msgs__msg__RobotState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__RobotState__fini(&array->data[i]);
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

moveit_msgs__msg__RobotState__Sequence *
moveit_msgs__msg__RobotState__Sequence__create(size_t size)
{
  moveit_msgs__msg__RobotState__Sequence * array = (moveit_msgs__msg__RobotState__Sequence *)malloc(sizeof(moveit_msgs__msg__RobotState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__RobotState__Sequence__destroy(moveit_msgs__msg__RobotState__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__RobotState__Sequence__fini(array);
  }
  free(array);
}
