#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

#include "find_char.h"

bool is_sentence(const string &s) {
    /* function checks if s is a sentence or not */
    // if there's a single period at the end of s, then s is a sentence
    string::size_type ctr{0};
    return find_char(s, '.', ctr) == s.size() - 1 && ctr == 1;
}

int main() {
    string s{"youssef mohamed mokhtar."};
    if (is_sentence) {
        cout << "string is a sentence." << endl;
    } else {
        cout << "string isn't a sentence." << endl;
    }
    return 0;
}