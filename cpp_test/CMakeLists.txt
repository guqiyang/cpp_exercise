cmake_minimum_required(VERSION 2.8.3)
project(cpp_test)

find_package(catkin REQUIRED COMPONENTS geometry_msgs roscpp rospy cv_bridge)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES aicroboxi_example
  CATKIN_DEPENDS geometry_msgs roscpp rospy
#  DEPENDS system_lib
)

include_directories(
  includes
  ${catkin_INCLUDE_DIRS}
)

add_executable(classes nodes/classes.cpp)
target_link_libraries(classes ${catkin_LIBRARIES})
