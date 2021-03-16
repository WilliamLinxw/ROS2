# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_geometric_shapes_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED geometric_shapes_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(geometric_shapes_FOUND FALSE)
  elseif(NOT geometric_shapes_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(geometric_shapes_FOUND FALSE)
  endif()
  return()
endif()
set(_geometric_shapes_CONFIG_INCLUDED TRUE)

# output package information
if(NOT geometric_shapes_FIND_QUIETLY)
  message(STATUS "Found geometric_shapes: 0.7.0 (${geometric_shapes_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'geometric_shapes' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${geometric_shapes_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(geometric_shapes_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_libraries-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${geometric_shapes_DIR}/${_extra}")
endforeach()
