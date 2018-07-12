//
// Created by akruglov on 7/12/18.
//


#include <utility>
#include <iostream>

std::pair<int, int> divide_remainder(int dividend, int divisor) {
    return { dividend / divisor, dividend % divisor };
};

void decomposition() {
    if (auto [fraction, remainder] = divide_remainder(10, 3); fraction < remainder * 2) {
        std::cout << "Remainder is not too smaller than fraction.\n";
    }

    auto v {1}; // int
    // auto w {1, 2}; - error from C++17
    auto w = {1, 2}; // std::initializer_list<int>

    // automatic inferring of template parameters types in constructors
    std::pair my_pair { 123, "abc" };
}
