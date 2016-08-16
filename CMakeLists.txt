cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra")

set(PROJECT_NAME audacity_labels_reformat)
project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp libs/substring.cpp libs/substring.hpp libs/string_parse.cpp libs/string_parse.hpp libs/time_hms.cpp libs/time_hms.hpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})