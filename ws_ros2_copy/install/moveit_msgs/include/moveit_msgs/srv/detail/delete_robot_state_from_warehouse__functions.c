// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/DeleteRobotStateFromWarehouse.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `name`
// Member `robot`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__init(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__fini(msg);
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__init(&msg->robot)) {
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__fini(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // robot
  rosidl_runtime_c__String__fini(&msg->robot);
}

moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__create()
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * msg = (moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request *)malloc(sizeof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request));
  bool success = moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__destroy(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * msg)
{
  if (msg) {
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__init(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request *)calloc(size, sizeof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__fini(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__fini(&array->data[i]);
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

moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__create(size_t size)
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * array = (moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence *)malloc(sizeof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__destroy(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__fini(array);
  }
  free(array);
}


bool
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__init(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__fini(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__create()
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * msg = (moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response *)malloc(sizeof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response));
  bool success = moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__destroy(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * msg)
{
  if (msg) {
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__init(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response *)calloc(size, sizeof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__fini(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__fini(&array->data[i]);
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

moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__create(size_t size)
{
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * array = (moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence *)malloc(sizeof(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__destroy(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__fini(array);
  }
  free(array);
}
