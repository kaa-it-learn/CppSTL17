//
// Created by akruglov on 7/13/18.
//

#include <iostream>
#include <map>
#include <string>

void map_insert_guess() {
    using namespace std;

    map<string, size_t> m {{"b", 1}, {"c", 2}, {"d", 3}};

    auto insert_it (end(m));

    for (const auto& s : { "z", "y", "x", "w" }) {
        insert_it = m.insert(insert_it, { s, 1 });
    }

    // wrong guess
    m.insert(end(m), { "a", 1 });

    for (const auto&[key, value] : m) {
        cout << "\"" << key << "\": " << value << ", ";
    }

    cout << '\n';
}