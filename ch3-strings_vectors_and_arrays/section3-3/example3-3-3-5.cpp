/*
    subscribting don't add elements to the vector!
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // wrong code
    vector<int> ivec;   // empty vector
    for (decltype(ivec.size()) ix = 0; ix != 10; ++ix) {
        ivec[ix] = ix;  // disaster: ivec has no elements after the incrementation
    }
    for (auto i: ivec) {
        cout << i << endl;
    }

    // correct code
    vector<int> ivec2;
    for (decltype(ivec2.size()) i{0}; i != 11; ++i) {
        ivec2.push_back(i);
    }
    for (auto i: ivec2) {
        cout << i << endl;
    }
    return 0;
}