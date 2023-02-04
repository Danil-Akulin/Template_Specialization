cmake_minimum_required(VERSION 3.24)
project(untitled19)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static-pthreads")
set(CMAKE_EXE_LINKER_FLAGS "-static")
add_executable(untitled19 main.cpp)
