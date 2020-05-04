cmake_minimum_required(VERSION 3.15)
project(Budget)

set(CMAKE_CXX_STANDARD 14)

add_executable(Budget main.cpp item.cpp item.h outcome.cpp outcome.h date.cpp date.h)