#include <iostream>

#include "common.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    decomposition();
    constexpr_if_fun();
    vector_erase_remove();
    vector_quick_remove();
    vector_insert_sorted();
    try_emplace_map();

    return 0;
}