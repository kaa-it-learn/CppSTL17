//
// Created by akruglov on 7/12/18.
//

#ifndef CPPSTL17_COMMON_H
#define CPPSTL17_COMMON_H

void decomposition();
void constexpr_if_fun();
void vector_erase_remove();
void vector_quick_remove();
void vector_insert_sorted();
void try_emplace_map();
void map_insert_guess();
void map_change_keys();
void unordered_map_custom_type();
void stack_calculator();
void word_frequency();
void sentence_stats();
void private_tasks();
void numeric_iterator();
void iterator_adapters();
void fib_iterators();
void reverse_iterator_adapters();
int sentinel_iterator(int argc, char* argv[]);
void debug_iterator();
void iterator_zip();
void lambdas();
void function_polimorphism();
void function_concat();
void function_complex_predicates();
void functions_with_same_parameters();
void custom_transform_if();
void cartesian_product();
void copy_containers();
void sort_containers();
void removing_items_from_containers();
void transforming_items_in_containers();
void finding_items();
void reducing_range_in_vector();
void pattern_search_string();
void sampling_vectors();
void input_permutations();
void dictionary_merge();
void prefix_tree();
void word_suggestion();
void gen_fourier_transform();
void vector_sum_error();
void mandelbrot();
void custom_split();
void custom_gather();
void remove_consecutive_whitespace();
void string_compress();
void creating_strings();
void trim_whitespace();
void using_string_view(char* argv[]);

class process_monitor {
public:
    static const inline std::string standard_string { "some static globally available string" };
};

inline process_monitor global_process_monitor;

template <typename ... Ts>
auto sum(Ts ... ts) {
    return (ts + ...);
}

#endif //CPPSTL17_COMMON_H
