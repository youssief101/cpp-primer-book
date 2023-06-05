/*
    ways to initialize a vector
*/
#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main() {
    int n{30};
    int val{-1};
    vector<int> v1; // vector that holds objects of type int. default initialization; v1 is empty
    vector<int> v2(v1); // v2 has a copy of each element in v1.
    vector<int> v2 = v1;    // equivalent to v2 (v1), v2 is a copy of the elements in v1.
    vector<int> v3 (n, val);    // v3 has n(30) elements with value "-1"
    vector<int> v4 (n); // v5 has n copies of a value-initalized object.
    vector<string> v5 {"ahmed", "youssef", "khaled"};  // v5 has 3 elements which are the "ahmed", "youssef", "khaled".
    vector<int> v6 = {1, 2, 3, 4, 5}; // equivalent to vector<int> v6 {1, 2, 3, 4, 5}
    return 0;
}