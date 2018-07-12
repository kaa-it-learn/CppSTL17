cmake_minimum_required(VERSION 3.10)
project(CppSTL17)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppSTL17 main.cpp 01-decomposition.cpp common.h 02-constexpr-if.cpp)