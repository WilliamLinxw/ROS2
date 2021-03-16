// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/GetStateValidity.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/get_state_validity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `robot_state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `group_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `constraints`
#include "moveit_msgs/msg/detail/constraints__functions.h"

bool
moveit_msgs__srv__GetStateValidity_Request__init(moveit_msgs__srv__GetStateValidity_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__init(&msg->robot_state)) {
    moveit_msgs__srv__GetStateValidity_Request__fini(msg);
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    moveit_msgs__srv__GetStateValidity_Request__fini(msg);
    return false;
  }
  // constraints
  if (!moveit_msgs__msg__Constraints__init(&msg->constraints)) {
    moveit_msgs__srv__GetStateValidity_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetStateValidity_Request__fini(moveit_msgs__srv__GetStateValidity_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_state
  moveit_msgs__msg__RobotState__fini(&msg->robot_state);
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // constraints
  moveit_msgs__msg__Constraints__fini(&msg->constraints);
}

moveit_msgs__srv__GetStateValidity_Request *
moveit_msgs__srv__GetStateValidity_Request__create()
{
  moveit_msgs__srv__GetStateValidity_Request * msg = (moveit_msgs__srv__GetStateValidity_Request *)malloc(sizeof(moveit_msgs__srv__GetStateValidity_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetStateValidity_Request));
  bool success = moveit_msgs__srv__GetStateValidity_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetStateValidity_Request__destroy(moveit_msgs__srv__GetStateValidity_Request * msg)
{
  if (msg) {
    moveit_msgs__srv__GetStateValidity_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GetStateValidity_Request__Sequence__init(moveit_msgs__srv__GetStateValidity_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GetStateValidity_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GetStateValidity_Request *)calloc(size, sizeof(moveit_msgs__srv__GetStateValidity_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetStateValidity_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetStateValidity_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__GetStateValidity_Request__Sequence__fini(moveit_msgs__srv__GetStateValidity_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GetStateValidity_Request__fini(&array->data[i]);
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

moveit_msgs__srv__GetStateValidity_Request__Sequence *
moveit_msgs__srv__GetStateValidity_Request__Sequence__create(size_t size)
{
  moveit_msgs__srv__GetStateValidity_Request__Sequence * array = (moveit_msgs__srv__GetStateValidity_Request__Sequence *)malloc(sizeof(moveit_msgs__srv__GetStateValidity_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetStateValidity_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetStateValidity_Request__Sequence__destroy(moveit_msgs__srv__GetStateValidity_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GetStateValidity_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `contacts`
#include "moveit_msgs/msg/detail/contact_information__functions.h"
// Member `cost_sources`
#include "moveit_msgs/msg/detail/cost_source__functions.h"
// Member `constraint_result`
#include "moveit_msgs/msg/detail/constraint_eval_result__functions.h"

bool
moveit_msgs__srv__GetStateValidity_Response__init(moveit_msgs__srv__GetStateValidity_Response * msg)
{
  if (!msg) {
    return false;
  }
  // valid
  // contacts
  if (!moveit_msgs__msg__ContactInformation__Sequence__init(&msg->contacts, 0)) {
    moveit_msgs__srv__GetStateValidity_Response__fini(msg);
    return false;
  }
  // cost_sources
  if (!moveit_msgs__msg__CostSource__Sequence__init(&msg->cost_sources, 0)) {
    moveit_msgs__srv__GetStateValidity_Response__fini(msg);
    return false;
  }
  // constraint_result
  if (!moveit_msgs__msg__ConstraintEvalResult__Sequence__init(&msg->constraint_result, 0)) {
    moveit_msgs__srv__GetStateValidity_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetStateValidity_Response__fini(moveit_msgs__srv__GetStateValidity_Response * msg)
{
  if (!msg) {
    return;
  }
  // valid
  // contacts
  moveit_msgs__msg__ContactInformation__Sequence__fini(&msg->contacts);
  // cost_sources
  moveit_msgs__msg__CostSource__Sequence__fini(&msg->cost_sources);
  // constraint_result
  moveit_msgs__msg__ConstraintEvalResult__Sequence__fini(&msg->constraint_result);
}

moveit_msgs__srv__GetStateValidity_Response *
moveit_msgs__srv__GetStateValidity_Response__create()
{
  moveit_msgs__srv__GetStateValidity_Response * msg = (moveit_msgs__srv__GetStateValidity_Response *)malloc(sizeof(moveit_msgs__srv__GetStateValidity_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetStateValidity_Response));
  bool success = moveit_msgs__srv__GetStateValidity_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetStateValidity_Response__destroy(moveit_msgs__srv__GetStateValidity_Response * msg)
{
  if (msg) {
    moveit_msgs__srv__GetStateValidity_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GetStateValidity_Response__Sequence__init(moveit_msgs__srv__GetStateValidity_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GetStateValidity_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GetStateValidity_Response *)calloc(size, sizeof(moveit_msgs__srv__GetStateValidity_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetStateValidity_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetStateValidity_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__GetStateValidity_Response__Sequence__fini(moveit_msgs__srv__GetStateValidity_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GetStateValidity_Response__fini(&array->data[i]);
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

moveit_msgs__srv__GetStateValidity_Response__Sequence *
moveit_msgs__srv__GetStateValidity_Response__Sequence__create(size_t size)
{
  moveit_msgs__srv__GetStateValidity_Response__Sequence * array = (moveit_msgs__srv__GetStateValidity_Response__Sequence *)malloc(sizeof(moveit_msgs__srv__GetStateValidity_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetStateValidity_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetStateValidity_Response__Sequence__destroy(moveit_msgs__srv__GetStateValidity_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GetStateValidity_Response__Sequence__fini(array);
  }
  free(array);
}
