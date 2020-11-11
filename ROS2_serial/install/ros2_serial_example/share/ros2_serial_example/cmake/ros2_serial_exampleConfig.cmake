# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ros2_serial_example_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ros2_serial_example_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ros2_serial_example_FOUND FALSE)
  elseif(NOT ros2_serial_example_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ros2_serial_example_FOUND FALSE)
  endif()
  return()
endif()
set(_ros2_serial_example_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ros2_serial_example_FIND_QUIETLY)
  message(STATUS "Found ros2_serial_example: 0.1.0 (${ros2_serial_example_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ros2_serial_example' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ros2_serial_example_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${ros2_serial_example_DIR}/${_extra}")
endforeach()
