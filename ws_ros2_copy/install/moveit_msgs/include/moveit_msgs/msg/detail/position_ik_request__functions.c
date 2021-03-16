// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PositionIKRequest.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/position_ik_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `group_name`
// Member `ik_link_name`
// Member `ik_link_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `robot_state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `constraints`
#include "moveit_msgs/msg/detail/constraints__functions.h"
// Member `pose_stamped`
// Member `pose_stamped_vector`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `timeout`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
moveit_msgs__msg__PositionIKRequest__init(moveit_msgs__msg__PositionIKRequest * msg)
{
  if (!msg) {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    moveit_msgs__msg__PositionIKRequest__fini(msg);
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__init(&msg->robot_state)) {
    moveit_msgs__msg__PositionIKRequest__fini(msg);
    return false;
  }
  // constraints
  if (!moveit_msgs__msg__Constraints__init(&msg->constraints)) {
    moveit_msgs__msg__PositionIKRequest__fini(msg);
    return false;
  }
  // avoid_collisions
  // ik_link_name
  if (!rosidl_runtime_c__String__init(&msg->ik_link_name)) {
    moveit_msgs__msg__PositionIKRequest__fini(msg);
    return false;
  }
  // pose_stamped
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose_stamped)) {
    moveit_msgs__msg__PositionIKRequest__fini(msg);
    return false;
  }
  // ik_link_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->ik_link_names, 0)) {
    moveit_msgs__msg__PositionIKRequest__fini(msg);
    return false;
  }
  // pose_stamped_vector
  if (!geometry_msgs__msg__PoseStamped__Sequence__init(&msg->pose_stamped_vector, 0)) {
    moveit_msgs__msg__PositionIKRequest__fini(msg);
    return false;
  }
  // timeout
  if (!builtin_interfaces__msg__Duration__init(&msg->timeout)) {
    moveit_msgs__msg__PositionIKRequest__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__PositionIKRequest__fini(moveit_msgs__msg__PositionIKRequest * msg)
{
  if (!msg) {
    return;
  }
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // robot_state
  moveit_msgs__msg__RobotState__fini(&msg->robot_state);
  // constraints
  moveit_msgs__msg__Constraints__fini(&msg->constraints);
  // avoid_collisions
  // ik_link_name
  rosidl_runtime_c__String__fini(&msg->ik_link_name);
  // pose_stamped
  geometry_msgs__msg__PoseStamped__fini(&msg->pose_stamped);
  // ik_link_names
  rosidl_runtime_c__String__Sequence__fini(&msg->ik_link_names);
  // pose_stamped_vector
  geometry_msgs__msg__PoseStamped__Sequence__fini(&msg->pose_stamped_vector);
  // timeout
  builtin_interfaces__msg__Duration__fini(&msg->timeout);
}

moveit_msgs__msg__PositionIKRequest *
moveit_msgs__msg__PositionIKRequest__create()
{
  moveit_msgs__msg__PositionIKRequest * msg = (moveit_msgs__msg__PositionIKRequest *)malloc(sizeof(moveit_msgs__msg__PositionIKRequest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PositionIKRequest));
  bool success = moveit_msgs__msg__PositionIKRequest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PositionIKRequest__destroy(moveit_msgs__msg__PositionIKRequest * msg)
{
  if (msg) {
    moveit_msgs__msg__PositionIKRequest__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__PositionIKRequest__Sequence__init(moveit_msgs__msg__PositionIKRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__PositionIKRequest * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__PositionIKRequest *)calloc(size, sizeof(moveit_msgs__msg__PositionIKRequest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PositionIKRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PositionIKRequest__fini(&data[i - 1]);
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
moveit_msgs__msg__PositionIKRequest__Sequence__fini(moveit_msgs__msg__PositionIKRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__PositionIKRequest__fini(&array->data[i]);
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

moveit_msgs__msg__PositionIKRequest__Sequence *
moveit_msgs__msg__PositionIKRequest__Sequence__create(size_t size)
{
  moveit_msgs__msg__PositionIKRequest__Sequence * array = (moveit_msgs__msg__PositionIKRequest__Sequence *)malloc(sizeof(moveit_msgs__msg__PositionIKRequest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PositionIKRequest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PositionIKRequest__Sequence__destroy(moveit_msgs__msg__PositionIKRequest__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__PositionIKRequest__Sequence__fini(array);
  }
  free(array);
}
