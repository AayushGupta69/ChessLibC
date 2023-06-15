cmake_minimum_required(VERSION 3.26.4)
project(Chess C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
aux_source_directory(./src/ SRC)
include_directories(./include/)

add_executable(Chess ${SRC})
