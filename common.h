//
// Created by akruglov on 7/12/18.
//

#ifndef CPPSTL17_COMMON_H
#define CPPSTL17_COMMON_H

void decomposition();
void constexpr_if_fun();

class process_monitor {
public:
    static const inline std::string standard_string { "some static globally available string" };
};

inline process_monitor global_process_monitor;



#endif //CPPSTL17_COMMON_H
