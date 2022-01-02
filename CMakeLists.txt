cmake_minimum_required(VERSION 3.22)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

# set the project name
project(MultiThreading)

# include directories
include_directories(include)

set(SOURCES 
src/main.cpp 
src/Communicator.cpp)

# add the executable
add_executable(MultiThreading ${SOURCES})