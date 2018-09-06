cmake_minimum_required(VERSION 3.12)
project(RobotArmMotionAndVision)

set(CMAKE_CXX_STANDARD 14)

add_executable(RobotArmMotionAndVision main.cpp Arm.cpp Arm.h Point.cpp Point.h Segment.cpp Segment.h)