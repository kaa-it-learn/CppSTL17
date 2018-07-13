cmake_minimum_required(VERSION 3.10)
project(CppSTL17)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppSTL17 main.cpp 01-decomposition.cpp common.h 02-constexpr-if.cpp 03-vector-erase-remove.cpp 04-vector-quick-remove.cpp 05-vector-insert-sorted.cpp 06-try-emplace-map.cpp 07-map-insert-guess.cpp)