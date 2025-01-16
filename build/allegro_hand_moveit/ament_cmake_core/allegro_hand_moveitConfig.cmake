# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_allegro_hand_moveit_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED allegro_hand_moveit_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(allegro_hand_moveit_FOUND FALSE)
  elseif(NOT allegro_hand_moveit_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(allegro_hand_moveit_FOUND FALSE)
  endif()
  return()
endif()
set(_allegro_hand_moveit_CONFIG_INCLUDED TRUE)

# output package information
if(NOT allegro_hand_moveit_FIND_QUIETLY)
  message(STATUS "Found allegro_hand_moveit: 0.3.0 (${allegro_hand_moveit_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'allegro_hand_moveit' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${allegro_hand_moveit_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(allegro_hand_moveit_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${allegro_hand_moveit_DIR}/${_extra}")
endforeach()
