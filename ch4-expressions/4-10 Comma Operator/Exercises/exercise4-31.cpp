#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

int main() {
    vector<int> ivec = {10, 20, 30, 40};
    vector<int>::size_type cnt = ivec.size();
    // assign values from size ... 1 to the elements in ivec
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt) {
        ivec[ix] = cnt;
        cout << ivec[ix] << " " << endl;
    }
    return 0;
}