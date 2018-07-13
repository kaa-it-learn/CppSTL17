//
// Created by akruglov on 7/13/18.
//

#include <vector>
#include <algorithm>
#include <iostream>

void vector_erase_remove() {
    using namespace std;

    vector<int> v { 1, 2, 3, 2, 5, 2, 6, 2, 4, 8 };

    const auto new_end (remove(begin(v), end(v), 2));
    v.erase(new_end, end(v));

    for (auto i : v) {
        cout << i << ", ";
    }

    cout << '\n';

    const auto odd ([](int i) { return i % 2 != 0;});
    v.erase(remove_if(begin(v), end(v), odd), end(v));
    v.shrink_to_fit();

    for (auto i : v) {
        cout << i << ", ";
    }

    cout << '\n';
}