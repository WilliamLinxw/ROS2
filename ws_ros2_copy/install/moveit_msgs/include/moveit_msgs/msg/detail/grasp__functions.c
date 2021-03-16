// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/grasp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
// Member `allowed_touch_objects`
#include "rosidl_runtime_c/string_functions.h"
// Member `pre_grasp_posture`
// Member `grasp_posture`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
// Member `grasp_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `pre_grasp_approach`
// Member `post_grasp_retreat`
// Member `post_place_retreat`
#include "moveit_msgs/msg/detail/gripper_translation__functions.h"

bool
moveit_msgs__msg__Grasp__init(moveit_msgs__msg__Grasp * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // pre_grasp_posture
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->pre_grasp_posture)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // grasp_posture
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->grasp_posture)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // grasp_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->grasp_pose)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // grasp_quality
  // pre_grasp_approach
  if (!moveit_msgs__msg__GripperTranslation__init(&msg->pre_grasp_approach)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // post_grasp_retreat
  if (!moveit_msgs__msg__GripperTranslation__init(&msg->post_grasp_retreat)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // post_place_retreat
  if (!moveit_msgs__msg__GripperTranslation__init(&msg->post_place_retreat)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // max_contact_force
  // allowed_touch_objects
  if (!rosidl_runtime_c__String__Sequence__init(&msg->allowed_touch_objects, 0)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__Grasp__fini(moveit_msgs__msg__Grasp * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // pre_grasp_posture
  trajectory_msgs__msg__JointTrajectory__fini(&msg->pre_grasp_posture);
  // grasp_posture
  trajectory_msgs__msg__JointTrajectory__fini(&msg->grasp_posture);
  // grasp_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->grasp_pose);
  // grasp_quality
  // pre_grasp_approach
  moveit_msgs__msg__GripperTranslation__fini(&msg->pre_grasp_approach);
  // post_grasp_retreat
  moveit_msgs__msg__GripperTranslation__fini(&msg->post_grasp_retreat);
  // post_place_retreat
  moveit_msgs__msg__GripperTranslation__fini(&msg->post_place_retreat);
  // max_contact_force
  // allowed_touch_objects
  rosidl_runtime_c__String__Sequence__fini(&msg->allowed_touch_objects);
}

moveit_msgs__msg__Grasp *
moveit_msgs__msg__Grasp__create()
{
  moveit_msgs__msg__Grasp * msg = (moveit_msgs__msg__Grasp *)malloc(sizeof(moveit_msgs__msg__Grasp));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__Grasp));
  bool success = moveit_msgs__msg__Grasp__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__Grasp__destroy(moveit_msgs__msg__Grasp * msg)
{
  if (msg) {
    moveit_msgs__msg__Grasp__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__Grasp__Sequence__init(moveit_msgs__msg__Grasp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__Grasp * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__Grasp *)calloc(size, sizeof(moveit_msgs__msg__Grasp));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__Grasp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__Grasp__fini(&data[i - 1]);
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
moveit_msgs__msg__Grasp__Sequence__fini(moveit_msgs__msg__Grasp__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__Grasp__fini(&array->data[i]);
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

moveit_msgs__msg__Grasp__Sequence *
moveit_msgs__msg__Grasp__Sequence__create(size_t size)
{
  moveit_msgs__msg__Grasp__Sequence * array = (moveit_msgs__msg__Grasp__Sequence *)malloc(sizeof(moveit_msgs__msg__Grasp__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__Grasp__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__Grasp__Sequence__destroy(moveit_msgs__msg__Grasp__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__Grasp__Sequence__fini(array);
  }
  free(array);
}
