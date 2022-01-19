cmake_minimum_required(VERSION 3.18)
project(avlTree C)

set(CMAKE_C_STANDARD 99)

include_directories(avlTree)
add_subdirectory(avlTree)

add_executable(main main.c)

target_link_libraries(main avlTree)
