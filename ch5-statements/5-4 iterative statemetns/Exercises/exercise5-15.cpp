#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

int main() {
    // (a)
    vector<int> ivec = {10, 20, 30, 40, 50};
    size_t sz = ivec.size();

    for (int ix = 0; ix != sz; ++ix) {
        ; // no work to do
    }

    // (b)
    int ix;
    for (/* no initialization*/; ix != sz; ++ix) {
        ; // no work to do
    }

    // (c)
    for (int ix = 0; ix != sz; ++ix, ++sz) {
        ; // loop will execute infinitely!
    }
    return 0;
}