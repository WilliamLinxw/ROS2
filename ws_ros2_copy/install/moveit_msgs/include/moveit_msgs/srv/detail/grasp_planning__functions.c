// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/GraspPlanning.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/grasp_planning__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `group_name`
// Member `support_surfaces`
#include "rosidl_runtime_c/string_functions.h"
// Member `target`
// Member `movable_obstacles`
#include "moveit_msgs/msg/detail/collision_object__functions.h"
// Member `candidate_grasps`
#include "moveit_msgs/msg/detail/grasp__functions.h"

bool
moveit_msgs__srv__GraspPlanning_Request__init(moveit_msgs__srv__GraspPlanning_Request * msg)
{
  if (!msg) {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    moveit_msgs__srv__GraspPlanning_Request__fini(msg);
    return false;
  }
  // target
  if (!moveit_msgs__msg__CollisionObject__init(&msg->target)) {
    moveit_msgs__srv__GraspPlanning_Request__fini(msg);
    return false;
  }
  // support_surfaces
  if (!rosidl_runtime_c__String__Sequence__init(&msg->support_surfaces, 0)) {
    moveit_msgs__srv__GraspPlanning_Request__fini(msg);
    return false;
  }
  // candidate_grasps
  if (!moveit_msgs__msg__Grasp__Sequence__init(&msg->candidate_grasps, 0)) {
    moveit_msgs__srv__GraspPlanning_Request__fini(msg);
    return false;
  }
  // movable_obstacles
  if (!moveit_msgs__msg__CollisionObject__Sequence__init(&msg->movable_obstacles, 0)) {
    moveit_msgs__srv__GraspPlanning_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GraspPlanning_Request__fini(moveit_msgs__srv__GraspPlanning_Request * msg)
{
  if (!msg) {
    return;
  }
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // target
  moveit_msgs__msg__CollisionObject__fini(&msg->target);
  // support_surfaces
  rosidl_runtime_c__String__Sequence__fini(&msg->support_surfaces);
  // candidate_grasps
  moveit_msgs__msg__Grasp__Sequence__fini(&msg->candidate_grasps);
  // movable_obstacles
  moveit_msgs__msg__CollisionObject__Sequence__fini(&msg->movable_obstacles);
}

moveit_msgs__srv__GraspPlanning_Request *
moveit_msgs__srv__GraspPlanning_Request__create()
{
  moveit_msgs__srv__GraspPlanning_Request * msg = (moveit_msgs__srv__GraspPlanning_Request *)malloc(sizeof(moveit_msgs__srv__GraspPlanning_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GraspPlanning_Request));
  bool success = moveit_msgs__srv__GraspPlanning_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GraspPlanning_Request__destroy(moveit_msgs__srv__GraspPlanning_Request * msg)
{
  if (msg) {
    moveit_msgs__srv__GraspPlanning_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GraspPlanning_Request__Sequence__init(moveit_msgs__srv__GraspPlanning_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GraspPlanning_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GraspPlanning_Request *)calloc(size, sizeof(moveit_msgs__srv__GraspPlanning_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GraspPlanning_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GraspPlanning_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__GraspPlanning_Request__Sequence__fini(moveit_msgs__srv__GraspPlanning_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GraspPlanning_Request__fini(&array->data[i]);
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

moveit_msgs__srv__GraspPlanning_Request__Sequence *
moveit_msgs__srv__GraspPlanning_Request__Sequence__create(size_t size)
{
  moveit_msgs__srv__GraspPlanning_Request__Sequence * array = (moveit_msgs__srv__GraspPlanning_Request__Sequence *)malloc(sizeof(moveit_msgs__srv__GraspPlanning_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GraspPlanning_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GraspPlanning_Request__Sequence__destroy(moveit_msgs__srv__GraspPlanning_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GraspPlanning_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `grasps`
// already included above
// #include "moveit_msgs/msg/detail/grasp__functions.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"

bool
moveit_msgs__srv__GraspPlanning_Response__init(moveit_msgs__srv__GraspPlanning_Response * msg)
{
  if (!msg) {
    return false;
  }
  // grasps
  if (!moveit_msgs__msg__Grasp__Sequence__init(&msg->grasps, 0)) {
    moveit_msgs__srv__GraspPlanning_Response__fini(msg);
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__srv__GraspPlanning_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GraspPlanning_Response__fini(moveit_msgs__srv__GraspPlanning_Response * msg)
{
  if (!msg) {
    return;
  }
  // grasps
  moveit_msgs__msg__Grasp__Sequence__fini(&msg->grasps);
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
}

moveit_msgs__srv__GraspPlanning_Response *
moveit_msgs__srv__GraspPlanning_Response__create()
{
  moveit_msgs__srv__GraspPlanning_Response * msg = (moveit_msgs__srv__GraspPlanning_Response *)malloc(sizeof(moveit_msgs__srv__GraspPlanning_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GraspPlanning_Response));
  bool success = moveit_msgs__srv__GraspPlanning_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GraspPlanning_Response__destroy(moveit_msgs__srv__GraspPlanning_Response * msg)
{
  if (msg) {
    moveit_msgs__srv__GraspPlanning_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__GraspPlanning_Response__Sequence__init(moveit_msgs__srv__GraspPlanning_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__GraspPlanning_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__GraspPlanning_Response *)calloc(size, sizeof(moveit_msgs__srv__GraspPlanning_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GraspPlanning_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GraspPlanning_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__GraspPlanning_Response__Sequence__fini(moveit_msgs__srv__GraspPlanning_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__GraspPlanning_Response__fini(&array->data[i]);
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

moveit_msgs__srv__GraspPlanning_Response__Sequence *
moveit_msgs__srv__GraspPlanning_Response__Sequence__create(size_t size)
{
  moveit_msgs__srv__GraspPlanning_Response__Sequence * array = (moveit_msgs__srv__GraspPlanning_Response__Sequence *)malloc(sizeof(moveit_msgs__srv__GraspPlanning_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GraspPlanning_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GraspPlanning_Response__Sequence__destroy(moveit_msgs__srv__GraspPlanning_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__GraspPlanning_Response__Sequence__fini(array);
  }
  free(array);
}
