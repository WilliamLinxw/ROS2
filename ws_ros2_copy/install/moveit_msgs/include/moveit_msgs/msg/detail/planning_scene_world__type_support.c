// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/PlanningSceneWorld.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/planning_scene_world__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/planning_scene_world__functions.h"
#include "moveit_msgs/msg/detail/planning_scene_world__struct.h"


// Include directives for member types
// Member `collision_objects`
#include "moveit_msgs/msg/collision_object.h"
// Member `collision_objects`
#include "moveit_msgs/msg/detail/collision_object__rosidl_typesupport_introspection_c.h"
// Member `octomap`
#include "octomap_msgs/msg/octomap_with_pose.h"
// Member `octomap`
#include "octomap_msgs/msg/detail/octomap_with_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__PlanningSceneWorld__init(message_memory);
}

void PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_fini_function(void * message_memory)
{
  moveit_msgs__msg__PlanningSceneWorld__fini(message_memory);
}

size_t PlanningSceneWorld__rosidl_typesupport_introspection_c__size_function__CollisionObject__collision_objects(
  const void * untyped_member)
{
  const moveit_msgs__msg__CollisionObject__Sequence * member =
    (const moveit_msgs__msg__CollisionObject__Sequence *)(untyped_member);
  return member->size;
}

const void * PlanningSceneWorld__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__collision_objects(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__CollisionObject__Sequence * member =
    (const moveit_msgs__msg__CollisionObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PlanningSceneWorld__rosidl_typesupport_introspection_c__get_function__CollisionObject__collision_objects(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__CollisionObject__Sequence * member =
    (moveit_msgs__msg__CollisionObject__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PlanningSceneWorld__rosidl_typesupport_introspection_c__resize_function__CollisionObject__collision_objects(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__CollisionObject__Sequence * member =
    (moveit_msgs__msg__CollisionObject__Sequence *)(untyped_member);
  moveit_msgs__msg__CollisionObject__Sequence__fini(member);
  return moveit_msgs__msg__CollisionObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_message_member_array[2] = {
  {
    "collision_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlanningSceneWorld, collision_objects),  // bytes offset in struct
    NULL,  // default value
    PlanningSceneWorld__rosidl_typesupport_introspection_c__size_function__CollisionObject__collision_objects,  // size() function pointer
    PlanningSceneWorld__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__collision_objects,  // get_const(index) function pointer
    PlanningSceneWorld__rosidl_typesupport_introspection_c__get_function__CollisionObject__collision_objects,  // get(index) function pointer
    PlanningSceneWorld__rosidl_typesupport_introspection_c__resize_function__CollisionObject__collision_objects  // resize(index) function pointer
  },
  {
    "octomap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlanningSceneWorld, octomap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_message_members = {
  "moveit_msgs__msg",  // message namespace
  "PlanningSceneWorld",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__msg__PlanningSceneWorld),
  PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_message_member_array,  // message members
  PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_message_type_support_handle = {
  0,
  &PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlanningSceneWorld)() {
  PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CollisionObject)();
  PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_msgs, msg, OctomapWithPose)();
  if (!PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_message_type_support_handle.typesupport_identifier) {
    PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PlanningSceneWorld__rosidl_typesupport_introspection_c__PlanningSceneWorld_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
