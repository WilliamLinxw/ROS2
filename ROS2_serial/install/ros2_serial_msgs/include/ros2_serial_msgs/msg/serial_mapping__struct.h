// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_serial_msgs:msg/SerialMapping.idl
// generated code does not contain a copyright notice

#ifndef ROS2_SERIAL_MSGS__MSG__SERIAL_MAPPING__STRUCT_H_
#define ROS2_SERIAL_MSGS__MSG__SERIAL_MAPPING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SERIALTOROS2'.
enum
{
  ros2_serial_msgs__msg__SerialMapping__SERIALTOROS2 = 0
};

/// Constant 'ROS2TOSERIAL'.
enum
{
  ros2_serial_msgs__msg__SerialMapping__ROS2TOSERIAL = 1
};

// Include directives for member types
// Member 'topic_names'
// Member 'types'
#include "rosidl_generator_c/string.h"
// Member 'serial_mappings'
// Member 'direction'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/SerialMapping in the package ros2_serial_msgs.
typedef struct ros2_serial_msgs__msg__SerialMapping
{
  rosidl_generator_c__String__Sequence topic_names;
  rosidl_generator_c__uint64__Sequence serial_mappings;
  rosidl_generator_c__String__Sequence types;
  rosidl_generator_c__uint8__Sequence direction;
} ros2_serial_msgs__msg__SerialMapping;

// Struct for a sequence of ros2_serial_msgs__msg__SerialMapping.
typedef struct ros2_serial_msgs__msg__SerialMapping__Sequence
{
  ros2_serial_msgs__msg__SerialMapping * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_serial_msgs__msg__SerialMapping__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_SERIAL_MSGS__MSG__SERIAL_MAPPING__STRUCT_H_
