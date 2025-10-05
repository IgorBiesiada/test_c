cmake_minimum_required(VERSION 4.0)
project(c_test C)

set(CMAKE_C_STANDARD 99)

add_library(c_test STATIC library.c)
