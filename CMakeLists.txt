cmake_minimum_required(VERSION 3.10)
project(CppSTL17)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fconcepts")

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
                        13-private-tasks.cpp
                        14-numeric-iterator.cpp
                        15-iterator-adapters.cpp
                        16-fib-iterators.cpp
                        17-reverse-iterator-adapters.cpp
                        18-sentinel-iterator.cpp
                        19-debug-iterator.cpp
                        20-iterator-zip.cpp
                        21-lambdas.cpp
                        22-function-polimorphism.cpp
                        23-function-concat.cpp
                        24-function-complex-predicates.cpp
                        25-functions-with-same-parameters.cpp
                        26-custom-transform-if.cpp
                        27-cartesian-product.cpp
                        28-copy-containers.cpp
                        29-sort-containers.cpp
                        30-removing-items-from-containers.cpp
                        31-transforming-items-in-containers.cpp
                        32-finding-items.cpp
                        33-reducing-range-in-vector.cpp
                        34-pattern-search-string.cpp
                        35-sampling-vectors.cpp
                        36-input-permutations.cpp
                        37-dictionary-merge.cpp
                        38-prefix-tree.cpp
                        39-word-suggestion.cpp
                        40-fourier-transform.cpp
                        41-vector-sum-error.cpp
                        42-mandelbrot.cpp
                        43-custom-split.cpp
                        44-gather.cpp
                        45-remove-consecutive-whitespace.cpp
                        46-string-compress.cpp
                        47-creating-strings.cpp
                        48-trim-whitespace.cpp
                        49-using-string-view.cpp)
