cmake_minimum_required (VERSION 3.5)

project (test)

link_directories(${CMAKE_SOURCE_DIR}/lib ${CMAKE_SOURCE_DIR}/3rd_party/lib)

add_executable(test main.cpp gtest.cpp)

include_directories(test ${CMAKE_SOURCE_DIR}/inc ${CMAKE_SOURCE_DIR}/3rd_party)

target_link_libraries(test string gtest gmock gmock_main gtest_main pthread)

SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/app)
