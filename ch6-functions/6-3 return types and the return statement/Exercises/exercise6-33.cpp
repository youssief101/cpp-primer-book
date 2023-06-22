#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &ivec, size_t index) {
    if (index == ivec.size()) {
        cout << endl;
        return;
    }
    cout << ivec[index] << " ";
    print(ivec, index + 1);
}

int main() {
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print(ivec, 0);
    return 0;
}