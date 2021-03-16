# generated from ament_cmake_export_dependencies/cmake/ament_cmake_export_dependencies-extras.cmake.in

set(_exported_dependencies "class_loader;geometric_shapes;interactive_markers;moveit_ros_planning;moveit_ros_planning_interface;moveit_msgs;moveit_core;octomap_msgs;moveit_ros_robot_interaction;object_recognition_msgs;pluginlib;rclcpp;rclcpp_action;rclpy;rviz2;tf2_eigen;Eigen3;rviz_ogre_vendor")

find_package(ament_cmake_libraries QUIET REQUIRED)

# find_package() all dependencies
# and append their DEFINITIONS INCLUDE_DIRS, LIBRARIES, and LINK_FLAGS
# variables to moveit_ros_visualization_DEFINITIONS, moveit_ros_visualization_INCLUDE_DIRS,
# moveit_ros_visualization_LIBRARIES, and moveit_ros_visualization_LINK_FLAGS.
# Additionally collect the direct dependency names in
# moveit_ros_visualization_DEPENDENCIES as well as the recursive dependency names
# in moveit_ros_visualization_RECURSIVE_DEPENDENCIES.
if(NOT _exported_dependencies STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  set(moveit_ros_visualization_DEPENDENCIES ${_exported_dependencies})
  set(moveit_ros_visualization_RECURSIVE_DEPENDENCIES ${_exported_dependencies})
  set(_libraries)
  foreach(_dep ${_exported_dependencies})
    if(NOT ${_dep}_FOUND)
      find_package("${_dep}" QUIET REQUIRED)
    endif()
    # if a package provides modern CMake interface targets use them
    # exclusively assuming the classic CMake variables only exist for
    # backward compatibility
    set(use_modern_cmake FALSE)
    if(NOT "${${_dep}_TARGETS}" STREQUAL "")
      foreach(_target ${${_dep}_TARGETS})
        # only use actual targets
        # in case a package uses this variable for other content
        if(TARGET "${_target}")
          get_target_property(_include_dirs ${_target} INTERFACE_INCLUDE_DIRECTORIES)
          if(_include_dirs)
            list_append_unique(moveit_ros_visualization_INCLUDE_DIRS "${_include_dirs}")
          endif()

          get_target_property(_imported_configurations ${_target} IMPORTED_CONFIGURATIONS)
          if(_imported_configurations)
            get_target_property(_imported_implib ${_target} IMPORTED_IMPLIB_${_imported_configurations})
            if(_imported_implib)
              list(APPEND _libraries "${_imported_implib}")
            else()
              get_target_property(_imported_location ${_target} IMPORTED_LOCATION_${_imported_configurations})
              if(_imported_location)
                list(APPEND _libraries "${_imported_location}")
              endif()
            endif()
          endif()

          get_target_property(_link_libraries ${_target} INTERFACE_LINK_LIBRARIES)
          if(_link_libraries)
            list(APPEND _libraries "${_link_libraries}")
          endif()
          set(use_modern_cmake TRUE)
        endif()
      endforeach()
    endif()
    if(NOT use_modern_cmake)
      if(${_dep}_DEFINITIONS)
        list_append_unique(moveit_ros_visualization_DEFINITIONS "${${_dep}_DEFINITIONS}")
      endif()
      if(${_dep}_INCLUDE_DIRS)
        list_append_unique(moveit_ros_visualization_INCLUDE_DIRS "${${_dep}_INCLUDE_DIRS}")
      endif()
      if(${_dep}_LIBRARIES)
        list(APPEND _libraries "${${_dep}_LIBRARIES}")
      endif()
      if(${_dep}_LINK_FLAGS)
        list_append_unique(moveit_ros_visualization_LINK_FLAGS "${${_dep}_LINK_FLAGS}")
      endif()
      if(${_dep}_RECURSIVE_DEPENDENCIES)
        list_append_unique(moveit_ros_visualization_RECURSIVE_DEPENDENCIES "${${_dep}_RECURSIVE_DEPENDENCIES}")
      endif()
    endif()
    if(_libraries)
      ament_libraries_deduplicate(_libraries "${_libraries}")
      list(APPEND moveit_ros_visualization_LIBRARIES "${_libraries}")
    endif()
  endforeach()
endif()