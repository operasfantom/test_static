cmake_minimum_required(VERSION 3.17)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Weverything)
add_library(user OBJECT user.c)
# recompile user code with -include flag
target_compile_options(user PRIVATE -I${CMAKE_CURRENT_SOURCE_DIR} -includeinclude.h)
add_executable(test test.cpp)
target_link_libraries(test PUBLIC user)