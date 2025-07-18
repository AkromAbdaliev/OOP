cmake_minimum_required(VERSION 3.14)

project(OOP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(student_lb
    include/Student.h
    include/EngineeringStudent.h
    include/GraduatingStudent.h

    src/Student.cpp
    src/EngineeringStudent.cpp
    src/GraduatingStudent.cpp
)

include(GNUInstallDirs)

install(TARGETS student_lb
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)


target_include_directories(student_lb
    PUBLIC ${CMAKE_SOURCE_DIR}/include
)

add_subdirectory(test_lb)
