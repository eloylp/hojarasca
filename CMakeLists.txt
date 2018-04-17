cmake_minimum_required(VERSION 3.10)
project(hojarasca)

set(CMAKE_CXX_STANDARD 11)

add_executable(hojarasca src/main.cpp src/RelativeClock.cpp src/RelativeClock.h)