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
    map_insert_guess();
    map_change_keys();
    unordered_map_custom_type();
    stack_calculator();
    word_frequency();
    sentence_stats();
    private_tasks();

    std::getchar();
    std::getchar();

    return 0;
}