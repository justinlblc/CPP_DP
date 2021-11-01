cmake_minimum_required(VERSION 3.20)
project(CPP_DP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CPP_DP
        Robot.cpp
        Robot.h
        RobotMixeur.cpp
        RobotMixeur.h
        RobotPoussiere.cpp
        RobotPoussiere.h)
