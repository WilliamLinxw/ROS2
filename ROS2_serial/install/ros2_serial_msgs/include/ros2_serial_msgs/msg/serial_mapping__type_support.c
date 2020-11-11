// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_serial_msgs:msg/SerialMapping.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_serial_msgs/msg/serial_mapping__rosidl_typesupport_introspection_c.h"
#include "ros2_serial_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_serial_msgs/msg/serial_mapping__struct.h"


// Include directives for member types
// Member `topic_names`
// Member `types`
#include "rosidl_generator_c/string_functions.h"
// Member `serial_mappings`
// Member `direction`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SerialMapping__rosidl_typesupport_introspection_c__SerialMapping_message_member_array[4] = {
  {
    "topic_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_serial_msgs__msg__SerialMapping, topic_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_mappings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_serial_msgs__msg__SerialMapping, serial_mappings),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_serial_msgs__msg__SerialMapping, types),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_serial_msgs__msg__SerialMapping, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SerialMapping__rosidl_typesupport_introspection_c__SerialMapping_message_members = {
  "ros2_serial_msgs__msg",  // message namespace
  "SerialMapping",  // message name
  4,  // number of fields
  sizeof(ros2_serial_msgs__msg__SerialMapping),
  SerialMapping__rosidl_typesupport_introspection_c__SerialMapping_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SerialMapping__rosidl_typesupport_introspection_c__SerialMapping_message_type_support_handle = {
  0,
  &SerialMapping__rosidl_typesupport_introspection_c__SerialMapping_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_serial_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_serial_msgs, msg, SerialMapping)() {
  if (!SerialMapping__rosidl_typesupport_introspection_c__SerialMapping_message_type_support_handle.typesupport_identifier) {
    SerialMapping__rosidl_typesupport_introspection_c__SerialMapping_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SerialMapping__rosidl_typesupport_introspection_c__SerialMapping_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
