cmake_minimum_required (VERSION 3.5)

project(string)

message(${CMAKE_SOURCE_DIR}/inc)

add_library(string SHARED String.cpp)

include_directories(${CMAKE_SOURCE_DIR}/inc)

SET(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)
