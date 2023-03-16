cmake_minimum_required(VERSION 3.23)
project(singleton)

set(CMAKE_CXX_STANDARD 14)

add_executable(singleton main.cpp Singleton.cpp Singleton.h)
