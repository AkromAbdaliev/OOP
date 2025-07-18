cmake_minimum_required(VERSION 3.14)

project(test_lb LANGUAGES CXX)

add_executable(test_lb
    main.cpp
)

target_link_libraries(test_lb
    PRIVATE student_lb
)
