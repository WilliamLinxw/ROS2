// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_serial_msgs:msg/SerialMapping.idl
// generated code does not contain a copyright notice
#include "ros2_serial_msgs/msg/serial_mapping__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_serial_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_serial_msgs/msg/serial_mapping__struct.h"
#include "ros2_serial_msgs/msg/serial_mapping__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/primitives_sequence.h"  // direction, serial_mappings
#include "rosidl_generator_c/primitives_sequence_functions.h"  // direction, serial_mappings
#include "rosidl_generator_c/string.h"  // topic_names, types
#include "rosidl_generator_c/string_functions.h"  // topic_names, types

// forward declare type support functions


using _SerialMapping__ros_msg_type = ros2_serial_msgs__msg__SerialMapping;

static bool _SerialMapping__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SerialMapping__ros_msg_type * ros_message = static_cast<const _SerialMapping__ros_msg_type *>(untyped_ros_message);
  // Field name: topic_names
  {
    size_t size = ros_message->topic_names.size;
    auto array_ptr = ros_message->topic_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: serial_mappings
  {
    size_t size = ros_message->serial_mappings.size;
    auto array_ptr = ros_message->serial_mappings.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: types
  {
    size_t size = ros_message->types.size;
    auto array_ptr = ros_message->types.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: direction
  {
    size_t size = ros_message->direction.size;
    auto array_ptr = ros_message->direction.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SerialMapping__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SerialMapping__ros_msg_type * ros_message = static_cast<_SerialMapping__ros_msg_type *>(untyped_ros_message);
  // Field name: topic_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->topic_names.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->topic_names);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->topic_names, size)) {
      return "failed to create array for field 'topic_names'";
    }
    auto array_ptr = ros_message->topic_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_generator_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'topic_names'\n");
        return false;
      }
    }
  }

  // Field name: serial_mappings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->serial_mappings.data) {
      rosidl_generator_c__uint64__Sequence__fini(&ros_message->serial_mappings);
    }
    if (!rosidl_generator_c__uint64__Sequence__init(&ros_message->serial_mappings, size)) {
      return "failed to create array for field 'serial_mappings'";
    }
    auto array_ptr = ros_message->serial_mappings.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: types
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->types.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->types);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->types, size)) {
      return "failed to create array for field 'types'";
    }
    auto array_ptr = ros_message->types.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_generator_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'types'\n");
        return false;
      }
    }
  }

  // Field name: direction
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->direction.data) {
      rosidl_generator_c__uint8__Sequence__fini(&ros_message->direction);
    }
    if (!rosidl_generator_c__uint8__Sequence__init(&ros_message->direction, size)) {
      return "failed to create array for field 'direction'";
    }
    auto array_ptr = ros_message->direction.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_serial_msgs
size_t get_serialized_size_ros2_serial_msgs__msg__SerialMapping(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SerialMapping__ros_msg_type * ros_message = static_cast<const _SerialMapping__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name topic_names
  {
    size_t array_size = ros_message->topic_names.size;
    auto array_ptr = ros_message->topic_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name serial_mappings
  {
    size_t array_size = ros_message->serial_mappings.size;
    auto array_ptr = ros_message->serial_mappings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name types
  {
    size_t array_size = ros_message->types.size;
    auto array_ptr = ros_message->types.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name direction
  {
    size_t array_size = ros_message->direction.size;
    auto array_ptr = ros_message->direction.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SerialMapping__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_serial_msgs__msg__SerialMapping(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_serial_msgs
size_t max_serialized_size_ros2_serial_msgs__msg__SerialMapping(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: topic_names
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: serial_mappings
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: types
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: direction
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SerialMapping__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros2_serial_msgs__msg__SerialMapping(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SerialMapping = {
  "ros2_serial_msgs::msg",
  "SerialMapping",
  _SerialMapping__cdr_serialize,
  _SerialMapping__cdr_deserialize,
  _SerialMapping__get_serialized_size,
  _SerialMapping__max_serialized_size
};

static rosidl_message_type_support_t _SerialMapping__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SerialMapping,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_serial_msgs, msg, SerialMapping)() {
  return &_SerialMapping__type_support;
}

#if defined(__cplusplus)
}
#endif
