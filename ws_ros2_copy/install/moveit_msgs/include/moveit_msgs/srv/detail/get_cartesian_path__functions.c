// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/GetCartesianPath.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/get_cartesian_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `start_state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `group_name`
// Member `link_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoints`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `path_constraints`
#include "moveit_msgs/msg/detail/constraints__functions.h"

bool
moveit_msgs__srv__GetCartesianPath_Request__init(moveit_msgs__srv__GetCartesianPath_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
    return false;
  }
  // start_state
  if (!moveit_msgs__msg__RobotState__init(&msg->start_state)) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__init(&msg->link_name)) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->waypoints, 0)) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
    return false;
  }
  // max_step
  // jump_threshold
  // prismatic_jump_threshold
  // revolute_jump_threshold
  // avoid_collisions
  // path_constraints
  if (!moveit_msgs__msg__Constraints__init(&msg->path_constraints)) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetCartesianPath_Request__fini(moveit_msgs__srv__GetCartesianPath_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // start_state
  moveit_msgs__msg__RobotState__fini(&msg->start_state);
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // link_name
  rosidl_runtime_c__String__fini(&msg->link_name);
  // waypoints
  geometry_msgs__msg__Pose__Sequence__fini(&msg->waypoints);
  // max_step
  // jump_threshold
  // prismatic_jump_threshold
  // revolute_jump_threshold
  // avoid_collisions
  // path_constraints
  moveit_msgs__msg__Constraints__fini(&msg->path_constraints);
}

moveit_msgs__srv__GetCartesianPath_Request *
moveit_msgs__srv__GetCartesianPath_Request__create()
{
  moveit_msgs__srv__GetCartesianPath_Request * msg = (moveit_msgs__srv__GetCartesianPath_Request *)malloc(sizeof(moveit_msgs__srv__GetCartesianPath_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetCartesianPath_Request));
  bool success = moveit_msgs__srv__GetCartesianPath_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetCartesianPath_Request__destroy(moveit_msgs__srv__GetCartesianPath_Request * msg)
{
  if (msg) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GetCartesianPath_Request__Sequence__init(moveit_msgs__srv__GetCartesianPath_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GetCartesianPath_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GetCartesianPath_Request *)calloc(size, sizeof(moveit_msgs__srv__GetCartesianPath_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetCartesianPath_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetCartesianPath_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__GetCartesianPath_Request__Sequence__fini(moveit_msgs__srv__GetCartesianPath_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GetCartesianPath_Request__fini(&array->data[i]);
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

moveit_msgs__srv__GetCartesianPath_Request__Sequence *
moveit_msgs__srv__GetCartesianPath_Request__Sequence__create(size_t size)
{
  moveit_msgs__srv__GetCartesianPath_Request__Sequence * array = (moveit_msgs__srv__GetCartesianPath_Request__Sequence *)malloc(sizeof(moveit_msgs__srv__GetCartesianPath_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetCartesianPath_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetCartesianPath_Request__Sequence__destroy(moveit_msgs__srv__GetCartesianPath_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GetCartesianPath_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `start_state`
// already included above
// #include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `solution`
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"

bool
moveit_msgs__srv__GetCartesianPath_Response__init(moveit_msgs__srv__GetCartesianPath_Response * msg)
{
  if (!msg) {
    return false;
  }
  // start_state
  if (!moveit_msgs__msg__RobotState__init(&msg->start_state)) {
    moveit_msgs__srv__GetCartesianPath_Response__fini(msg);
    return false;
  }
  // solution
  if (!moveit_msgs__msg__RobotTrajectory__init(&msg->solution)) {
    moveit_msgs__srv__GetCartesianPath_Response__fini(msg);
    return false;
  }
  // fraction
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__srv__GetCartesianPath_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetCartesianPath_Response__fini(moveit_msgs__srv__GetCartesianPath_Response * msg)
{
  if (!msg) {
    return;
  }
  // start_state
  moveit_msgs__msg__RobotState__fini(&msg->start_state);
  // solution
  moveit_msgs__msg__RobotTrajectory__fini(&msg->solution);
  // fraction
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
}

moveit_msgs__srv__GetCartesianPath_Response *
moveit_msgs__srv__GetCartesianPath_Response__create()
{
  moveit_msgs__srv__GetCartesianPath_Response * msg = (moveit_msgs__srv__GetCartesianPath_Response *)malloc(sizeof(moveit_msgs__srv__GetCartesianPath_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetCartesianPath_Response));
  bool success = moveit_msgs__srv__GetCartesianPath_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetCartesianPath_Response__destroy(moveit_msgs__srv__GetCartesianPath_Response * msg)
{
  if (msg) {
    moveit_msgs__srv__GetCartesianPath_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GetCartesianPath_Response__Sequence__init(moveit_msgs__srv__GetCartesianPath_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GetCartesianPath_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GetCartesianPath_Response *)calloc(size, sizeof(moveit_msgs__srv__GetCartesianPath_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetCartesianPath_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetCartesianPath_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__GetCartesianPath_Response__Sequence__fini(moveit_msgs__srv__GetCartesianPath_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GetCartesianPath_Response__fini(&array->data[i]);
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

moveit_msgs__srv__GetCartesianPath_Response__Sequence *
moveit_msgs__srv__GetCartesianPath_Response__Sequence__create(size_t size)
{
  moveit_msgs__srv__GetCartesianPath_Response__Sequence * array = (moveit_msgs__srv__GetCartesianPath_Response__Sequence *)malloc(sizeof(moveit_msgs__srv__GetCartesianPath_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetCartesianPath_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetCartesianPath_Response__Sequence__destroy(moveit_msgs__srv__GetCartesianPath_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GetCartesianPath_Response__Sequence__fini(array);
  }
  free(array);
}
