#include <map>
#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>

template <typename T>
class tree
{
    std::map<T, tree> trees;

public:
    template <typename It>
    void insert(It it, It end_it) {
        if (it == end_it) { return; }
        trees[*it].insert(std::next(it), end_it);
    }

    template <typename C>
    void insert(const C& container) {
        insert(std::begin(container), std::end(container));
    }

    void insert(const std::initializer_list<T> &il) {
        insert(std::begin(il), std::end(il));
    }

    void print(std::vector<T>& v) const {
        if (trees.empty()) {
            std::copy(std::begin(v), std::end(v), std::ostream_iterator<T>{std::cout, " "});
            std::cout << '\n';
        }
        for (const auto& p : trees) {
            v.push_back(p.first);
            p.second.print(v);
            v.pop_back();
        }
    }

    void print() const {
        std::vector<T> v;
        print(v);
    }

    template <typename It>
    std::optional<std::reference_wrapper<const tree>>
    subtree(It it, It end_it) const {
        if (it == end_it) { return ref(*this); }
        auto found (trees.find(*it));
        if (found == end(trees)) { return {}; }
        return found->second.subtree(next(it), end_it);
    }

    template <typename C>
    auto subtree(const C& c) {
        return subtree(std::begin(c), std::end(c));
    }
};