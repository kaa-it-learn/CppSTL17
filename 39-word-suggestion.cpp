#include <iostream>
#include <optional>
#include <algorithm>
#include <functional>
#include <iterator>
#include <map>
#include <list>
#include <string>
#include <sstream>
#include <fstream>

#include "tree.h"

using namespace std;

static void prompt() {
    cout << "Next input please:\n >";
}

void word_suggestion() {
    tree<string> t;
    fstream infile {"db.txt"};
    for (string line; getline(infile, line);) {
        istringstream iss {line};
        t.insert(istream_iterator<string>{iss}, {});
    }

    //prompt();
    fstream sample_file {"sample.txt"};
    for (string line; getline(sample_file, line);) {
        istringstream iss {line};
        if (auto st (t.subtree(istream_iterator<string>{iss}, {})); st) {
            cout << "Suggestions:\n";
            st->get().print();
        } else {
            cout << "No suggestions found.\n";
        }

        cout << "----------------\n";
        //prompt();
    }

    std::cin.get();
}