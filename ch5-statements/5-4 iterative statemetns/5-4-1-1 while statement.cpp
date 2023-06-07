#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main() {
    vector<int> v;
    int i;
    // read until end-of-file or other input failure
    while (cin >> i) {
        v.push_back(i);
    }
    // find the first negative element
    auto beg = v.begin();
    // using while statement give you access to the loop control variable which is beg
    while (beg != v.end() && *beg >= 0) {
        ++beg;
    }
    if (beg == v.end())
        // we know that all elements in v are greater than or equal to zero
        cout << "no negative values" << endl;
    else {
        cout << "program detected negative values!" << endl;
    }
    return 0;
}