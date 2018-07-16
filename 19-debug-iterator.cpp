#include <iostream>
#include <vector>

void debug_iterator() {
    std::vector<int> v{ 1,2,3 };

    v.shrink_to_fit();

    const auto it(std::begin(v));

    std::cout << *it << '\n';

    v.push_back(123);

    std::cout << *it << '\n';
}