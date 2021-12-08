cmake_minimum_required(VERSION 3.20)
project(Enumeration_C C)

set(CMAKE_C_STANDARD 99)

add_executable(Enumeration_C main.c Enumeration_c.h functions.c task.functions.c)
