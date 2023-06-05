#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

int main() {
    vector<int> ivec{10, 20, 30, 40, 50};
    // print the first element in ivec if there is one
    if (!ivec.empty()) {
        cout << ivec[0] << endl;
    }
    return 0;
}