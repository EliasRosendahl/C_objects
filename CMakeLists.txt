cmake_minimum_required(VERSION 3.13)
project(c_objects C)

set(CMAKE_C_STANDARD 99)

add_executable(c_objects main.c Dog.c Dog.h)