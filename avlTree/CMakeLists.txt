cmake_minimum_required(VERSION 3.18)
project(avlTree C)

set(CMAKE_C_STANDARD 99)

set(SOURCE_LIB avlTree.c node.c)

add_library(avlTree STATIC ${SOURCE_LIB})
