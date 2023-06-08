#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

int main() {
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // range variable must be a reference so we can write to the elements
    for (auto &r : v) {
        r *= 2; // double the value of each element in v
    }

    // a range for is defined in terms of the equivalent traditional for
    for (auto beg = v.begin(), end = v.end(); beg != end; ++beg) {
        auto &r = *beg; // r must be a reference so we can change the element
        r *= 2;         // double the value of each element in v
    }
    return 0;
}