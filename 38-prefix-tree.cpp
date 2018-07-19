#include <iostream>
#include <optional>
#include <algorithm>
#include <functional>
#include <iterator>
#include <map>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class tree
{
    map<T, tree> trees;

public:
    template <typename It>
    void insert(It it, It end_it) {
        if (it == end_it) { return; }
        trees[*it].insert(next(it), end_it);
    }

    template <typename C>
    void insert(const C& container) {
        insert(begin(container), end(container));
    }

    void insert(const initializer_list<T> &il) {
        insert(begin(il), end(il));
    }

    void print(vector<T>& v) const {
        if (trees.empty()) {
            copy(begin(v), end(v), ostream_iterator<T>{cout, " "});
            cout << '\n';
        }
        for (const auto& p : trees) {
            v.push_back(p.first);
            p.second.print(v);
            v.pop_back();
        }
    }

    void print() const {
        vector<T> v;
        print(v);
    }

    template <typename It>
    optional<reference_wrapper<const tree>>
    subtree(It it, It end_it) const {
        if (it == end_it) { return ref(*this); }
        auto found (trees.find(*it));
        if (found == end(trees)) { return {}; }
        return found->second.subtree(next(it), end_it);
    }

    template <typename C>
    auto subtree(const C& c) {
        return subtree(begin(c), end(c));
    }
};

void prefix_tree() {
    tree<string> t;
    t.insert({"hi", "how", "are", "you"});
    t.insert({"hi", "i", "am", "great", "thanks"});
    t.insert({"what", "are", "you", "doing"});
    t.insert({"i", "am", "watching", "a", "movie"});

    cout << "recorded sentences:\n";
    t.print();

    cout << "\npossible suggestions after \"hi\":\n";
    if (auto st (t.subtree(initializer_list<string>{"hi"})); st) {
        st->get().print();
    }
}