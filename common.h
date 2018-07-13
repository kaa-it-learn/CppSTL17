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
