cmake_minimum_required(VERSION 3.11)

project(cpp-study-notes)

add_executable(typs 1_lection/typs.cpp)
add_executable(globals_cpp 1_lection/extern/globals.h 1_lection/extern/globals.cpp 1_lection/extern/main.cpp)
add_executable(inline 1_lection/inline/inline.cpp
        1_lection/inline/inline.h)
