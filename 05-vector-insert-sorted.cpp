//
// Created by akruglov on 7/13/18.
//

#include <vector>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <string>

void insert_sorted(std::vector<std::string> &v, const std::string &word) {
    const auto insert_pos (std::lower_bound(std::begin(v), std::end(v), word));
    v.insert(insert_pos, word);
}

template <typename C, typename T>
void insert_sorted(C &v, const T &item) {
    const auto insert_pos (std::lower_bound(std::begin(v), std::end(v), item));
    v.insert(insert_pos, item);
};

void vector_insert_sorted() {
    using namespace std;

    vector<string> v { "some", "random", "words", "without", "order", "aaa", "yyy" };

    assert(false == is_sorted(begin(v), end(v)));
    sort(begin(v), end(v));
    assert(true == is_sorted(begin(v), end(v)));

    insert_sorted(v, "foobar");
    insert_sorted(v, "zzz");

    for (const auto& w : v) {
        cout << w << " ";
    }

    cout << '\n';
}