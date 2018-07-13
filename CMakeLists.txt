cmake_minimum_required(VERSION 3.10)
project(CppSTL17)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppSTL17 main.cpp
                        01-decomposition.cpp
                        common.h
                        02-constexpr-if.cpp
                        03-vector-erase-remove.cpp
                        04-vector-quick-remove.cpp
                        05-vector-insert-sorted.cpp
                        06-try-emplace-map.cpp
                        07-map-insert-guess.cpp
                        08-map-change-keys.cpp
                        09-unordered-map-custom-type.cpp
                        10-stack-calculator.cpp
                        11-word-frequency.cpp
                        12-sentence-stats.cpp
                        13-private-tasks.cpp)