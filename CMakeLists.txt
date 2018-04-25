cmake_minimum_required(VERSION 3.0)
project(HelloJSON)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Core)

add_executable(generate generate.cpp)
target_link_libraries(generate Qt5::Core)

add_executable(parse parse.cpp)
target_link_libraries(parse Qt5::Core)
 