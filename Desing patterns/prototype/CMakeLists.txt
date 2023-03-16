cmake_minimum_required(VERSION 3.23)
project(prototype)

set(CMAKE_CXX_STANDARD 14)

add_executable(prototype main.cpp IPrototype.cpp IPrototype.h Shape.cpp Shape.h Circle.cpp Circle.h)
