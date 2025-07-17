cmake_minimum_required(VERSION 3.14)

project(OOP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# for including header files /include
include_directories(include)

# adding library with its includes and src's
add_library(student_lb
    include/Student.h
    include/EngineeringStudent.h
    include/GraduatingStudent.h

    src/Student.cpp
    src/EngineeringStudent.cpp
    src/GraduatingStudent.cpp
)
# update main dir name
add_executable(main_exec
  main.cpp
)

# linking library to main executable
target_link_libraries(
    main_exec student_lb
)
