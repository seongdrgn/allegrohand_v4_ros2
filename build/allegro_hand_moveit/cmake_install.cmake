# Install script for directory: /home/kimsy/allegro_ws/allegro_hand_ros2_v5/src/allegro_hand_moveit

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/kimsy/allegro_ws/install/allegro_hand_moveit")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/kimsy/allegro_ws/build/allegro_hand_moveit/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/allegro_hand_moveit")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/kimsy/allegro_ws/build/allegro_hand_moveit/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/allegro_hand_moveit")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit/environment" TYPE FILE FILES "/home/kimsy/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit/environment" TYPE FILE FILES "/home/kimsy/allegro_ws/build/allegro_hand_moveit/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit/environment" TYPE FILE FILES "/home/kimsy/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit/environment" TYPE FILE FILES "/home/kimsy/allegro_ws/build/allegro_hand_moveit/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit" TYPE FILE FILES "/home/kimsy/allegro_ws/build/allegro_hand_moveit/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit" TYPE FILE FILES "/home/kimsy/allegro_ws/build/allegro_hand_moveit/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit" TYPE FILE FILES "/home/kimsy/allegro_ws/build/allegro_hand_moveit/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit" TYPE FILE FILES "/home/kimsy/allegro_ws/build/allegro_hand_moveit/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit" TYPE FILE FILES "/home/kimsy/allegro_ws/build/allegro_hand_moveit/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/kimsy/allegro_ws/build/allegro_hand_moveit/ament_cmake_index/share/ament_index/resource_index/packages/allegro_hand_moveit")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit/cmake" TYPE FILE FILES
    "/home/kimsy/allegro_ws/build/allegro_hand_moveit/ament_cmake_core/allegro_hand_moveitConfig.cmake"
    "/home/kimsy/allegro_ws/build/allegro_hand_moveit/ament_cmake_core/allegro_hand_moveitConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit" TYPE FILE FILES "/home/kimsy/allegro_ws/allegro_hand_ros2_v5/src/allegro_hand_moveit/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit" TYPE DIRECTORY FILES "/home/kimsy/allegro_ws/allegro_hand_ros2_v5/src/allegro_hand_moveit/launch" FILES_MATCHING REGEX "/[^/]*\\.launch\\.py$" REGEX "/setup\\_assistant\\.launch$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit" TYPE DIRECTORY FILES "/home/kimsy/allegro_ws/allegro_hand_ros2_v5/src/allegro_hand_moveit/config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/allegro_hand_moveit" TYPE FILE FILES "/home/kimsy/allegro_ws/allegro_hand_ros2_v5/src/allegro_hand_moveit/.setup_assistant")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/allegro_hand_moveit/save_joint_angles" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/allegro_hand_moveit/save_joint_angles")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/allegro_hand_moveit/save_joint_angles"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/allegro_hand_moveit" TYPE EXECUTABLE FILES "/home/kimsy/allegro_ws/build/allegro_hand_moveit/save_joint_angles")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/allegro_hand_moveit/save_joint_angles" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/allegro_hand_moveit/save_joint_angles")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/allegro_hand_moveit/save_joint_angles"
         OLD_RPATH "/home/kimsy/ros2_humble/install/std_srvs/lib:/home/kimsy/ros2_humble/install/rclcpp_lifecycle/lib:/home/kimsy/ros2_humble/install/rcl_lifecycle/lib:/home/kimsy/ros2_humble/install/lifecycle_msgs/lib:/home/kimsy/ros2_humble/install/kdl_parser/lib:/home/kimsy/ros2_humble/install/urdf/lib:/home/kimsy/ros2_humble/install/visualization_msgs/lib:/home/kimsy/ros2_humble/install/resource_retriever/lib:/home/kimsy/ros2_humble/install/sensor_msgs/lib:/home/kimsy/ros2_humble/install/shape_msgs/lib:/home/kimsy/ros2_humble/install/trajectory_msgs/lib:/home/kimsy/ros2_humble/install/tf2_ros/lib:/home/kimsy/ros2_humble/install/class_loader/lib:/home/kimsy/ros2_humble/install/message_filters/lib:/home/kimsy/ros2_humble/install/rclcpp_action/lib:/home/kimsy/ros2_humble/install/rclcpp/lib:/home/kimsy/ros2_humble/install/libstatistics_collector/lib:/home/kimsy/ros2_humble/install/rosgraph_msgs/lib:/home/kimsy/ros2_humble/install/statistics_msgs/lib:/home/kimsy/ros2_humble/install/rcl_action/lib:/home/kimsy/ros2_humble/install/rcl/lib:/home/kimsy/ros2_humble/install/rcl_interfaces/lib:/home/kimsy/ros2_humble/install/rcl_yaml_param_parser/lib:/home/kimsy/ros2_humble/install/libyaml_vendor/lib:/home/kimsy/ros2_humble/install/tracetools/lib:/home/kimsy/ros2_humble/install/rmw_implementation/lib:/home/kimsy/ros2_humble/install/ament_index_cpp/lib:/home/kimsy/ros2_humble/install/rcl_logging_spdlog/lib:/home/kimsy/ros2_humble/install/rcl_logging_interface/lib:/home/kimsy/ros2_humble/install/tf2_msgs/lib:/home/kimsy/ros2_humble/install/action_msgs/lib:/home/kimsy/ros2_humble/install/unique_identifier_msgs/lib:/home/kimsy/ros2_humble/install/tf2/lib:/home/kimsy/ros2_humble/install/geometry_msgs/lib:/home/kimsy/ros2_humble/install/std_msgs/lib:/home/kimsy/ros2_humble/install/builtin_interfaces/lib:/home/kimsy/ros2_humble/install/rosidl_typesupport_fastrtps_c/lib:/home/kimsy/ros2_humble/install/rosidl_typesupport_fastrtps_cpp/lib:/home/kimsy/ros2_humble/install/fastcdr/lib:/home/kimsy/ros2_humble/install/rmw/lib:/home/kimsy/ros2_humble/install/rosidl_typesupport_introspection_cpp/lib:/home/kimsy/ros2_humble/install/rosidl_typesupport_introspection_c/lib:/home/kimsy/ros2_humble/install/rosidl_typesupport_cpp/lib:/home/kimsy/ros2_humble/install/rosidl_typesupport_c/lib:/home/kimsy/ros2_humble/install/rcpputils/lib:/home/kimsy/ros2_humble/install/rosidl_runtime_c/lib:/home/kimsy/ros2_humble/install/rcutils/lib:/opt/ros/humble/lib:/home/kimsy/ros2_humble/install/urdfdom/lib:/opt/ros/humble/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/allegro_hand_moveit/save_joint_angles")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/kimsy/allegro_ws/build/allegro_hand_moveit/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
