cmake_minimum_required(VERSION 3.19)
project(Lahar)

set(CMAKE_CXX_STANDARD 17)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(Lahar main.cpp constants.cpp)
target_link_libraries(Lahar ${CURSES_LIBRARIES})