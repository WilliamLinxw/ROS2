// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_serial_msgs:msg/SerialMapping.idl
// generated code does not contain a copyright notice
#include "ros2_serial_msgs/msg/serial_mapping__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `topic_names`
// Member `types`
#include "rosidl_generator_c/string_functions.h"
// Member `serial_mappings`
// Member `direction`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
ros2_serial_msgs__msg__SerialMapping__init(ros2_serial_msgs__msg__SerialMapping * msg)
{
  if (!msg) {
    return false;
  }
  // topic_names
  if (!rosidl_generator_c__String__Sequence__init(&msg->topic_names, 0)) {
    ros2_serial_msgs__msg__SerialMapping__fini(msg);
    return false;
  }
  // serial_mappings
  if (!rosidl_generator_c__uint64__Sequence__init(&msg->serial_mappings, 0)) {
    ros2_serial_msgs__msg__SerialMapping__fini(msg);
    return false;
  }
  // types
  if (!rosidl_generator_c__String__Sequence__init(&msg->types, 0)) {
    ros2_serial_msgs__msg__SerialMapping__fini(msg);
    return false;
  }
  // direction
  if (!rosidl_generator_c__uint8__Sequence__init(&msg->direction, 0)) {
    ros2_serial_msgs__msg__SerialMapping__fini(msg);
    return false;
  }
  return true;
}

void
ros2_serial_msgs__msg__SerialMapping__fini(ros2_serial_msgs__msg__SerialMapping * msg)
{
  if (!msg) {
    return;
  }
  // topic_names
  rosidl_generator_c__String__Sequence__fini(&msg->topic_names);
  // serial_mappings
  rosidl_generator_c__uint64__Sequence__fini(&msg->serial_mappings);
  // types
  rosidl_generator_c__String__Sequence__fini(&msg->types);
  // direction
  rosidl_generator_c__uint8__Sequence__fini(&msg->direction);
}

ros2_serial_msgs__msg__SerialMapping *
ros2_serial_msgs__msg__SerialMapping__create()
{
  ros2_serial_msgs__msg__SerialMapping * msg = (ros2_serial_msgs__msg__SerialMapping *)malloc(sizeof(ros2_serial_msgs__msg__SerialMapping));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_serial_msgs__msg__SerialMapping));
  bool success = ros2_serial_msgs__msg__SerialMapping__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_serial_msgs__msg__SerialMapping__destroy(ros2_serial_msgs__msg__SerialMapping * msg)
{
  if (msg) {
    ros2_serial_msgs__msg__SerialMapping__fini(msg);
  }
  free(msg);
}


bool
ros2_serial_msgs__msg__SerialMapping__Sequence__init(ros2_serial_msgs__msg__SerialMapping__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_serial_msgs__msg__SerialMapping * data = NULL;
  if (size) {
    data = (ros2_serial_msgs__msg__SerialMapping *)calloc(size, sizeof(ros2_serial_msgs__msg__SerialMapping));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_serial_msgs__msg__SerialMapping__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_serial_msgs__msg__SerialMapping__fini(&data[i - 1]);
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
ros2_serial_msgs__msg__SerialMapping__Sequence__fini(ros2_serial_msgs__msg__SerialMapping__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_serial_msgs__msg__SerialMapping__fini(&array->data[i]);
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

ros2_serial_msgs__msg__SerialMapping__Sequence *
ros2_serial_msgs__msg__SerialMapping__Sequence__create(size_t size)
{
  ros2_serial_msgs__msg__SerialMapping__Sequence * array = (ros2_serial_msgs__msg__SerialMapping__Sequence *)malloc(sizeof(ros2_serial_msgs__msg__SerialMapping__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_serial_msgs__msg__SerialMapping__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_serial_msgs__msg__SerialMapping__Sequence__destroy(ros2_serial_msgs__msg__SerialMapping__Sequence * array)
{
  if (array) {
    ros2_serial_msgs__msg__SerialMapping__Sequence__fini(array);
  }
  free(array);
}
