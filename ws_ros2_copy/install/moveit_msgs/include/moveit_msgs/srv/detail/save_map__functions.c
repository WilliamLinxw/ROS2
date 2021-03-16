// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/SaveMap.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/save_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `filename`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__srv__SaveMap_Request__init(moveit_msgs__srv__SaveMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__init(&msg->filename)) {
    moveit_msgs__srv__SaveMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__SaveMap_Request__fini(moveit_msgs__srv__SaveMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // filename
  rosidl_runtime_c__String__fini(&msg->filename);
}

moveit_msgs__srv__SaveMap_Request *
moveit_msgs__srv__SaveMap_Request__create()
{
  moveit_msgs__srv__SaveMap_Request * msg = (moveit_msgs__srv__SaveMap_Request *)malloc(sizeof(moveit_msgs__srv__SaveMap_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__SaveMap_Request));
  bool success = moveit_msgs__srv__SaveMap_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__SaveMap_Request__destroy(moveit_msgs__srv__SaveMap_Request * msg)
{
  if (msg) {
    moveit_msgs__srv__SaveMap_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__SaveMap_Request__Sequence__init(moveit_msgs__srv__SaveMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__SaveMap_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__SaveMap_Request *)calloc(size, sizeof(moveit_msgs__srv__SaveMap_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__SaveMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__SaveMap_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__SaveMap_Request__Sequence__fini(moveit_msgs__srv__SaveMap_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__SaveMap_Request__fini(&array->data[i]);
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

moveit_msgs__srv__SaveMap_Request__Sequence *
moveit_msgs__srv__SaveMap_Request__Sequence__create(size_t size)
{
  moveit_msgs__srv__SaveMap_Request__Sequence * array = (moveit_msgs__srv__SaveMap_Request__Sequence *)malloc(sizeof(moveit_msgs__srv__SaveMap_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__SaveMap_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__SaveMap_Request__Sequence__destroy(moveit_msgs__srv__SaveMap_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__SaveMap_Request__Sequence__fini(array);
  }
  free(array);
}


bool
moveit_msgs__srv__SaveMap_Response__init(moveit_msgs__srv__SaveMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
moveit_msgs__srv__SaveMap_Response__fini(moveit_msgs__srv__SaveMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

moveit_msgs__srv__SaveMap_Response *
moveit_msgs__srv__SaveMap_Response__create()
{
  moveit_msgs__srv__SaveMap_Response * msg = (moveit_msgs__srv__SaveMap_Response *)malloc(sizeof(moveit_msgs__srv__SaveMap_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__SaveMap_Response));
  bool success = moveit_msgs__srv__SaveMap_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__SaveMap_Response__destroy(moveit_msgs__srv__SaveMap_Response * msg)
{
  if (msg) {
    moveit_msgs__srv__SaveMap_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__SaveMap_Response__Sequence__init(moveit_msgs__srv__SaveMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__SaveMap_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__SaveMap_Response *)calloc(size, sizeof(moveit_msgs__srv__SaveMap_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__SaveMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__SaveMap_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__SaveMap_Response__Sequence__fini(moveit_msgs__srv__SaveMap_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__SaveMap_Response__fini(&array->data[i]);
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

moveit_msgs__srv__SaveMap_Response__Sequence *
moveit_msgs__srv__SaveMap_Response__Sequence__create(size_t size)
{
  moveit_msgs__srv__SaveMap_Response__Sequence * array = (moveit_msgs__srv__SaveMap_Response__Sequence *)malloc(sizeof(moveit_msgs__srv__SaveMap_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__SaveMap_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__SaveMap_Response__Sequence__destroy(moveit_msgs__srv__SaveMap_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__SaveMap_Response__Sequence__fini(array);
  }
  free(array);
}