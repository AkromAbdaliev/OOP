cmake_minimum_required(VERSION 3.14)

project(OOP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# separation from top level
add_subdirectory(student_lb)
add_subdirectory(test_lb)
