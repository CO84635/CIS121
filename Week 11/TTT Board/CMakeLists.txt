cmake_minimum_required(VERSION 3.26)
project(TTT_Board)

set(CMAKE_CXX_STANDARD 17)

add_executable(TTT_Board main.cpp
        TTT_Logic.cpp
        TTT_Logic.h)
