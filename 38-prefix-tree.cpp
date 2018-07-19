#include <iostream>
#include <optional>
#include <algorithm>
#include <functional>
#include <iterator>
#include <map>
#include <vector>
#include <string>

#include "tree.h"

void prefix_tree() {
    using namespace std;

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