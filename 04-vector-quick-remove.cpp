//
// Created by akruglov on 7/13/18.
//

#include <vector>
#include <iostream>
#include <algorithm>

template <typename T>
void quick_remove_at(std::vector<T> &v, std::size_t idx) {
    if (idx < v.size()) {
        v[idx] = std::move(v.back());
        v.pop_back();
    }
}

template <typename T>
void quick_remove_at(std::vector<T> &v, typename std::vector<T>::iterator it) {
    if (it != std::end(v)) {
        *it = std::move(v.back());
        v.pop_back();
    }
}

void vector_quick_remove() {
    using namespace std;

    vector<int> v { 123, 456, 789, 100, 200 };

    quick_remove_at(v, 2);

    for (int i : v) {
        cout << i << ", ";
    }

    cout << '\n';

    quick_remove_at(v, find(begin(v), end(v), 123));

    for (int i : v) {
        cout << i << ", ";
    }

    cout << '\n';
}
