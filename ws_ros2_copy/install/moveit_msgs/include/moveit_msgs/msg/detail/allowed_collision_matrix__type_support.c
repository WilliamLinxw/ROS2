// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/allowed_collision_matrix__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/allowed_collision_matrix__functions.h"
#include "moveit_msgs/msg/detail/allowed_collision_matrix__struct.h"


// Include directives for member types
// Member `entry_names`
// Member `default_entry_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `entry_values`
#include "moveit_msgs/msg/allowed_collision_entry.h"
// Member `entry_values`
#include "moveit_msgs/msg/detail/allowed_collision_entry__rosidl_typesupport_introspection_c.h"
// Member `default_entry_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__AllowedCollisionMatrix__init(message_memory);
}

void AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_fini_function(void * message_memory)
{
  moveit_msgs__msg__AllowedCollisionMatrix__fini(message_memory);
}

size_t AllowedCollisionMatrix__rosidl_typesupport_introspection_c__size_function__AllowedCollisionEntry__entry_values(
  const void * untyped_member)
{
  const moveit_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (const moveit_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return member->size;
}

const void * AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionEntry__entry_values(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (const moveit_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionEntry__entry_values(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (moveit_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

bool AllowedCollisionMatrix__rosidl_typesupport_introspection_c__resize_function__AllowedCollisionEntry__entry_values(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (moveit_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  moveit_msgs__msg__AllowedCollisionEntry__Sequence__fini(member);
  return moveit_msgs__msg__AllowedCollisionEntry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_member_array[4] = {
  {
    "entry_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AllowedCollisionMatrix, entry_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "entry_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AllowedCollisionMatrix, entry_values),  // bytes offset in struct
    NULL,  // default value
    AllowedCollisionMatrix__rosidl_typesupport_introspection_c__size_function__AllowedCollisionEntry__entry_values,  // size() function pointer
    AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionEntry__entry_values,  // get_const(index) function pointer
    AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionEntry__entry_values,  // get(index) function pointer
    AllowedCollisionMatrix__rosidl_typesupport_introspection_c__resize_function__AllowedCollisionEntry__entry_values  // resize(index) function pointer
  },
  {
    "default_entry_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AllowedCollisionMatrix, default_entry_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "default_entry_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AllowedCollisionMatrix, default_entry_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_members = {
  "moveit_msgs__msg",  // message namespace
  "AllowedCollisionMatrix",  // message name
  4,  // number of fields
  sizeof(moveit_msgs__msg__AllowedCollisionMatrix),
  AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_member_array,  // message members
  AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_init_function,  // function to initialize message memory (memory has to be allocated)
  AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_type_support_handle = {
  0,
  &AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, AllowedCollisionMatrix)() {
  AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, AllowedCollisionEntry)();
  if (!AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_type_support_handle.typesupport_identifier) {
    AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
