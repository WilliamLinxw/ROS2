// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PlanningScene.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planning_scene__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `robot_model_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `robot_state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `fixed_frame_transforms`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
// Member `allowed_collision_matrix`
#include "moveit_msgs/msg/detail/allowed_collision_matrix__functions.h"
// Member `link_padding`
#include "moveit_msgs/msg/detail/link_padding__functions.h"
// Member `link_scale`
#include "moveit_msgs/msg/detail/link_scale__functions.h"
// Member `object_colors`
#include "moveit_msgs/msg/detail/object_color__functions.h"
// Member `world`
#include "moveit_msgs/msg/detail/planning_scene_world__functions.h"

bool
moveit_msgs__msg__PlanningScene__init(moveit_msgs__msg__PlanningScene * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__init(&msg->robot_state)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // robot_model_name
  if (!rosidl_runtime_c__String__init(&msg->robot_model_name)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // fixed_frame_transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__init(&msg->fixed_frame_transforms, 0)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // allowed_collision_matrix
  if (!moveit_msgs__msg__AllowedCollisionMatrix__init(&msg->allowed_collision_matrix)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // link_padding
  if (!moveit_msgs__msg__LinkPadding__Sequence__init(&msg->link_padding, 0)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // link_scale
  if (!moveit_msgs__msg__LinkScale__Sequence__init(&msg->link_scale, 0)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // object_colors
  if (!moveit_msgs__msg__ObjectColor__Sequence__init(&msg->object_colors, 0)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // world
  if (!moveit_msgs__msg__PlanningSceneWorld__init(&msg->world)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // is_diff
  return true;
}

void
moveit_msgs__msg__PlanningScene__fini(moveit_msgs__msg__PlanningScene * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // robot_state
  moveit_msgs__msg__RobotState__fini(&msg->robot_state);
  // robot_model_name
  rosidl_runtime_c__String__fini(&msg->robot_model_name);
  // fixed_frame_transforms
  geometry_msgs__msg__TransformStamped__Sequence__fini(&msg->fixed_frame_transforms);
  // allowed_collision_matrix
  moveit_msgs__msg__AllowedCollisionMatrix__fini(&msg->allowed_collision_matrix);
  // link_padding
  moveit_msgs__msg__LinkPadding__Sequence__fini(&msg->link_padding);
  // link_scale
  moveit_msgs__msg__LinkScale__Sequence__fini(&msg->link_scale);
  // object_colors
  moveit_msgs__msg__ObjectColor__Sequence__fini(&msg->object_colors);
  // world
  moveit_msgs__msg__PlanningSceneWorld__fini(&msg->world);
  // is_diff
}

moveit_msgs__msg__PlanningScene *
moveit_msgs__msg__PlanningScene__create()
{
  moveit_msgs__msg__PlanningScene * msg = (moveit_msgs__msg__PlanningScene *)malloc(sizeof(moveit_msgs__msg__PlanningScene));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PlanningScene));
  bool success = moveit_msgs__msg__PlanningScene__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PlanningScene__destroy(moveit_msgs__msg__PlanningScene * msg)
{
  if (msg) {
    moveit_msgs__msg__PlanningScene__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__PlanningScene__Sequence__init(moveit_msgs__msg__PlanningScene__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__PlanningScene * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__PlanningScene *)calloc(size, sizeof(moveit_msgs__msg__PlanningScene));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PlanningScene__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PlanningScene__fini(&data[i - 1]);
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
moveit_msgs__msg__PlanningScene__Sequence__fini(moveit_msgs__msg__PlanningScene__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__PlanningScene__fini(&array->data[i]);
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

moveit_msgs__msg__PlanningScene__Sequence *
moveit_msgs__msg__PlanningScene__Sequence__create(size_t size)
{
  moveit_msgs__msg__PlanningScene__Sequence * array = (moveit_msgs__msg__PlanningScene__Sequence *)malloc(sizeof(moveit_msgs__msg__PlanningScene__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PlanningScene__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PlanningScene__Sequence__destroy(moveit_msgs__msg__PlanningScene__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__PlanningScene__Sequence__fini(array);
  }
  free(array);
}
