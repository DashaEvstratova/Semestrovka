cmake_minimum_required(VERSION 3.21)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_library(untitled library.cpp function.cpp function.hpp include/node.hpp main.cpp main.h)
