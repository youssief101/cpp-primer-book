#include <iostream>
#include <vector>

using namespace std;

int main() {
    // compute an iterator to the element closest to the midpoint of vi
    vector<int> vi {1, 2, 3, 4, 5}; // the midpoint is 3
    auto mid = vi.begin() + vi.size() / 2;  // this yields an iterator data type for mid
    cout << *mid << endl;
    return 0;
}