cmake_minimum_required(VERSION 3.28)
project(cpp_to_js)

set(CMAKE_CXX_STANDARD 23)

add_executable(cpp_to_js main.cpp
        car.cpp
        car.h)
