#include <iostream>

#include "common.h"

int main(int argc, char** argv) {
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
    numeric_iterator();
    iterator_adapters();
    fib_iterators();
    reverse_iterator_adapters();
    sentinel_iterator(argc, argv);
    debug_iterator();
    iterator_zip();
    lambdas();
    function_polimorphism();
    function_concat();
    function_complex_predicates();
    functions_with_same_parameters();
    custom_transform_if();
    cartesian_product();
    copy_containers();
    sort_containers();
    removing_items_from_containers();
    transforming_items_in_containers();
    finding_items();
    reducing_range_in_vector();
    pattern_search_string();
    sampling_vectors();
    input_permutations();
    dictionary_merge();
    prefix_tree();
    word_suggestion();
    gen_fourier_transform();
    vector_sum_error();
    mandelbrot();
    custom_split();
    custom_gather();
    remove_consecutive_whitespace();
    string_compress();

    std::getchar();
    std::getchar();

    return 0;
}
