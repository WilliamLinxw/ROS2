// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/GetPositionFK.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/get_position_fk__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `fk_link_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `robot_state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"

bool
moveit_msgs__srv__GetPositionFK_Request__init(moveit_msgs__srv__GetPositionFK_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__srv__GetPositionFK_Request__fini(msg);
    return false;
  }
  // fk_link_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->fk_link_names, 0)) {
    moveit_msgs__srv__GetPositionFK_Request__fini(msg);
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__init(&msg->robot_state)) {
    moveit_msgs__srv__GetPositionFK_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetPositionFK_Request__fini(moveit_msgs__srv__GetPositionFK_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fk_link_names
  rosidl_runtime_c__String__Sequence__fini(&msg->fk_link_names);
  // robot_state
  moveit_msgs__msg__RobotState__fini(&msg->robot_state);
}

moveit_msgs__srv__GetPositionFK_Request *
moveit_msgs__srv__GetPositionFK_Request__create()
{
  moveit_msgs__srv__GetPositionFK_Request * msg = (moveit_msgs__srv__GetPositionFK_Request *)malloc(sizeof(moveit_msgs__srv__GetPositionFK_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetPositionFK_Request));
  bool success = moveit_msgs__srv__GetPositionFK_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetPositionFK_Request__destroy(moveit_msgs__srv__GetPositionFK_Request * msg)
{
  if (msg) {
    moveit_msgs__srv__GetPositionFK_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GetPositionFK_Request__Sequence__init(moveit_msgs__srv__GetPositionFK_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GetPositionFK_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GetPositionFK_Request *)calloc(size, sizeof(moveit_msgs__srv__GetPositionFK_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetPositionFK_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetPositionFK_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__GetPositionFK_Request__Sequence__fini(moveit_msgs__srv__GetPositionFK_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GetPositionFK_Request__fini(&array->data[i]);
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

moveit_msgs__srv__GetPositionFK_Request__Sequence *
moveit_msgs__srv__GetPositionFK_Request__Sequence__create(size_t size)
{
  moveit_msgs__srv__GetPositionFK_Request__Sequence * array = (moveit_msgs__srv__GetPositionFK_Request__Sequence *)malloc(sizeof(moveit_msgs__srv__GetPositionFK_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetPositionFK_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetPositionFK_Request__Sequence__destroy(moveit_msgs__srv__GetPositionFK_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GetPositionFK_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `pose_stamped`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `fk_link_names`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"

bool
moveit_msgs__srv__GetPositionFK_Response__init(moveit_msgs__srv__GetPositionFK_Response * msg)
{
  if (!msg) {
    return false;
  }
  // pose_stamped
  if (!geometry_msgs__msg__PoseStamped__Sequence__init(&msg->pose_stamped, 0)) {
    moveit_msgs__srv__GetPositionFK_Response__fini(msg);
    return false;
  }
  // fk_link_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->fk_link_names, 0)) {
    moveit_msgs__srv__GetPositionFK_Response__fini(msg);
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__srv__GetPositionFK_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetPositionFK_Response__fini(moveit_msgs__srv__GetPositionFK_Response * msg)
{
  if (!msg) {
    return;
  }
  // pose_stamped
  geometry_msgs__msg__PoseStamped__Sequence__fini(&msg->pose_stamped);
  // fk_link_names
  rosidl_runtime_c__String__Sequence__fini(&msg->fk_link_names);
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
}

moveit_msgs__srv__GetPositionFK_Response *
moveit_msgs__srv__GetPositionFK_Response__create()
{
  moveit_msgs__srv__GetPositionFK_Response * msg = (moveit_msgs__srv__GetPositionFK_Response *)malloc(sizeof(moveit_msgs__srv__GetPositionFK_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetPositionFK_Response));
  bool success = moveit_msgs__srv__GetPositionFK_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetPositionFK_Response__destroy(moveit_msgs__srv__GetPositionFK_Response * msg)
{
  if (msg) {
    moveit_msgs__srv__GetPositionFK_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GetPositionFK_Response__Sequence__init(moveit_msgs__srv__GetPositionFK_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GetPositionFK_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GetPositionFK_Response *)calloc(size, sizeof(moveit_msgs__srv__GetPositionFK_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetPositionFK_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetPositionFK_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__GetPositionFK_Response__Sequence__fini(moveit_msgs__srv__GetPositionFK_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GetPositionFK_Response__fini(&array->data[i]);
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

moveit_msgs__srv__GetPositionFK_Response__Sequence *
moveit_msgs__srv__GetPositionFK_Response__Sequence__create(size_t size)
{
  moveit_msgs__srv__GetPositionFK_Response__Sequence * array = (moveit_msgs__srv__GetPositionFK_Response__Sequence *)malloc(sizeof(moveit_msgs__srv__GetPositionFK_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetPositionFK_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetPositionFK_Response__Sequence__destroy(moveit_msgs__srv__GetPositionFK_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GetPositionFK_Response__Sequence__fini(array);
  }
  free(array);
}
