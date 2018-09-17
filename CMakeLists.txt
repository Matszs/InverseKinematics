cmake_minimum_required(VERSION 3.12)
project(RobotArmMotionAndVision)

set(CMAKE_CXX_STANDARD 14)

add_executable(RobotArmMotionAndVision src/main.cpp src/Arm.cpp src/Arm.h src/Point.cpp src/Point.h src/Segment.cpp src/Segment.h src/Vector.cpp src/Vector.h)