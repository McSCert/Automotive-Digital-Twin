cmake_minimum_required(VERSION 3.8)
project(controlling_fe)
set(CMAKE_VERBOSE_MAKEFILE ON)
# Set CMAKE_BUILD_TYPE
set(CMAKE_BUILD_TYPE Release)
# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()
# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(ALIAS_ROS2_TF2)
  add_definitions(-Dtf2=ros2_tf2)
  add_definitions(-Dtf2_ros=ros2_tf2_ros)
  add_definitions(-Dmessage_filters=ros2_message_filters)
endif()
# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(ament_cmake_ros REQUIRED)
find_package( ackermann_msgs REQUIRED)
find_package( rclcpp REQUIRED)
find_package( std_msgs REQUIRED)
find_package(custom_interfaces REQUIRED)
include_directories("include/controlling_fe")
set (CMAKE_SKIP_BUILD_RPATH false)
set (CMAKE_BUILD_WITH_INSTALL_RPATH true)
set (CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
set (CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
# Node
add_executable(fgc
src/fgc.cpp
src/fgc_data.cpp
src/main.cpp
src/ros2nodeinterface.cpp
src/rtGetInf.cpp
src/rtGetNaN.cpp
src/rt_nonfinite.cpp
src/slros2_initialize.cpp
src/slros_busmsg_conversion.cpp
)
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
target_compile_options(fgc PUBLIC
  $<$<OR:$<COMPILE_LANGUAGE:CXX>,$<COMPILE_LANGUAGE:C>>:
  -Wall -Wextra -Wpedantic
  >)
endif()
target_compile_options(fgc PRIVATE
  $<$<OR:$<COMPILE_LANGUAGE:CXX>,$<COMPILE_LANGUAGE:C>>:
  -DMODEL=fgc
  -DNUMST=1
  -DNCSTATES=0
  -DHAVESTDIO
  -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0
  -DCLASSIC_INTERFACE=0
  -DALLOCATIONFCN=0
  -DTID01EQ=0
  -DTERMFCN=1
  -DONESTEPFCN=1
  -DMAT_FILE=0
  -DMULTI_INSTANCE_CODE=1
  -DINTEGER_CODE=0
  -DMT=0
  -DROS2_PROJECT
  -DSTACK_SIZE=64
  -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__
  -DRT
  -fpermissive  >
  )
ament_target_dependencies(
  fgc
  "ackermann_msgs"
  "rclcpp"
  "std_msgs"
)
target_include_directories(fgc PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_link_libraries(fgc
	#    "/usr/local/MATLAB/R2023a/sys/os/glnxa64/orig/libstdc++.so.6"
	${CMAKE_DL_LIBS}
    )
install(TARGETS fgc
  EXPORT export_${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME})
ament_export_include_directories(
  include
)
foreach(file_i ${CUDA_BINS})
add_custom_command(
                   TARGET fgc
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND}
                   ARGS -E copy ${PROJECT_SOURCE_DIR}/src/${file_i} ${CMAKE_INSTALL_PREFIX}/fgc_ert_rtw/${file_i}
				   )
add_custom_command(
                   TARGET fgc
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND}
                   ARGS -E copy ${PROJECT_SOURCE_DIR}/src/${file_i} ${CMAKE_INSTALL_PREFIX}/codegen/exe/fgc/${file_i}
				   )
endforeach(file_i)

# python nodes
ament_python_install_package(${PROJECT_NAME})

install(PROGRAMS
  controlling_fe/lv_determination.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
# Generated on Sun Mar 30 15:55:18 2025
