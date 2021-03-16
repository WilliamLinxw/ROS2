// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/KinematicSolverInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/kinematic_solver_info__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/kinematic_solver_info__functions.h"
#include "moveit_msgs/msg/detail/kinematic_solver_info__struct.h"


// Include directives for member types
// Member `joint_names`
// Member `link_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `limits`
#include "moveit_msgs/msg/joint_limits.h"
// Member `limits`
#include "moveit_msgs/msg/detail/joint_limits__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__KinematicSolverInfo__init(message_memory);
}

void KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_fini_function(void * message_memory)
{
  moveit_msgs__msg__KinematicSolverInfo__fini(message_memory);
}

size_t KinematicSolverInfo__rosidl_typesupport_introspection_c__size_function__JointLimits__limits(
  const void * untyped_member)
{
  const moveit_msgs__msg__JointLimits__Sequence * member =
    (const moveit_msgs__msg__JointLimits__Sequence *)(untyped_member);
  return member->size;
}

const void * KinematicSolverInfo__rosidl_typesupport_introspection_c__get_const_function__JointLimits__limits(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__JointLimits__Sequence * member =
    (const moveit_msgs__msg__JointLimits__Sequence *)(untyped_member);
  return &member->data[index];
}

void * KinematicSolverInfo__rosidl_typesupport_introspection_c__get_function__JointLimits__limits(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__JointLimits__Sequence * member =
    (moveit_msgs__msg__JointLimits__Sequence *)(untyped_member);
  return &member->data[index];
}

bool KinematicSolverInfo__rosidl_typesupport_introspection_c__resize_function__JointLimits__limits(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__JointLimits__Sequence * member =
    (moveit_msgs__msg__JointLimits__Sequence *)(untyped_member);
  moveit_msgs__msg__JointLimits__Sequence__fini(member);
  return moveit_msgs__msg__JointLimits__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_member_array[3] = {
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__KinematicSolverInfo, joint_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__KinematicSolverInfo, limits),  // bytes offset in struct
    NULL,  // default value
    KinematicSolverInfo__rosidl_typesupport_introspection_c__size_function__JointLimits__limits,  // size() function pointer
    KinematicSolverInfo__rosidl_typesupport_introspection_c__get_const_function__JointLimits__limits,  // get_const(index) function pointer
    KinematicSolverInfo__rosidl_typesupport_introspection_c__get_function__JointLimits__limits,  // get(index) function pointer
    KinematicSolverInfo__rosidl_typesupport_introspection_c__resize_function__JointLimits__limits  // resize(index) function pointer
  },
  {
    "link_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__KinematicSolverInfo, link_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_members = {
  "moveit_msgs__msg",  // message namespace
  "KinematicSolverInfo",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__msg__KinematicSolverInfo),
  KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_member_array,  // message members
  KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_type_support_handle = {
  0,
  &KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, KinematicSolverInfo)() {
  KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, JointLimits)();
  if (!KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_type_support_handle.typesupport_identifier) {
    KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
