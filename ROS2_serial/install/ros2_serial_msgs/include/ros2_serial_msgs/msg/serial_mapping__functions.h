// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_serial_msgs:msg/SerialMapping.idl
// generated code does not contain a copyright notice

#ifndef ROS2_SERIAL_MSGS__MSG__SERIAL_MAPPING__FUNCTIONS_H_
#define ROS2_SERIAL_MSGS__MSG__SERIAL_MAPPING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "ros2_serial_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ros2_serial_msgs/msg/serial_mapping__struct.h"

/// Initialize msg/SerialMapping message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_serial_msgs__msg__SerialMapping
 * )) before or use
 * ros2_serial_msgs__msg__SerialMapping__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_serial_msgs
bool
ros2_serial_msgs__msg__SerialMapping__init(ros2_serial_msgs__msg__SerialMapping * msg);

/// Finalize msg/SerialMapping message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_serial_msgs
void
ros2_serial_msgs__msg__SerialMapping__fini(ros2_serial_msgs__msg__SerialMapping * msg);

/// Create msg/SerialMapping message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_serial_msgs__msg__SerialMapping__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_serial_msgs
ros2_serial_msgs__msg__SerialMapping *
ros2_serial_msgs__msg__SerialMapping__create();

/// Destroy msg/SerialMapping message.
/**
 * It calls
 * ros2_serial_msgs__msg__SerialMapping__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_serial_msgs
void
ros2_serial_msgs__msg__SerialMapping__destroy(ros2_serial_msgs__msg__SerialMapping * msg);


/// Initialize array of msg/SerialMapping messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_serial_msgs__msg__SerialMapping__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_serial_msgs
bool
ros2_serial_msgs__msg__SerialMapping__Sequence__init(ros2_serial_msgs__msg__SerialMapping__Sequence * array, size_t size);

/// Finalize array of msg/SerialMapping messages.
/**
 * It calls
 * ros2_serial_msgs__msg__SerialMapping__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_serial_msgs
void
ros2_serial_msgs__msg__SerialMapping__Sequence__fini(ros2_serial_msgs__msg__SerialMapping__Sequence * array);

/// Create array of msg/SerialMapping messages.
/**
 * It allocates the memory for the array and calls
 * ros2_serial_msgs__msg__SerialMapping__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_serial_msgs
ros2_serial_msgs__msg__SerialMapping__Sequence *
ros2_serial_msgs__msg__SerialMapping__Sequence__create(size_t size);

/// Destroy array of msg/SerialMapping messages.
/**
 * It calls
 * ros2_serial_msgs__msg__SerialMapping__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_serial_msgs
void
ros2_serial_msgs__msg__SerialMapping__Sequence__destroy(ros2_serial_msgs__msg__SerialMapping__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROS2_SERIAL_MSGS__MSG__SERIAL_MAPPING__FUNCTIONS_H_
