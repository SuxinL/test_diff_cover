cmake_minimum_required(VERSION 3.10)

project(test_diff_cover)

set(COVERAGE_COMPILE_FLAGS "-fprofile-arcs -ftest-coverage -fPIC -O0")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COVERAGE_COMPILE_FLAGS}")

add_subdirectory(print)

add_executable(test_print test_print.cpp)

target_link_libraries(test_print print)

target_include_directories(test_print PUBLIC print)
