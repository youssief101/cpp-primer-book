using namespace std;
#include <iostream>
#include <vector>

int main() {
    // the compiler determines the type of b, and e
    // b denotes the first element and e denotes one past the last element in v
    vector<int> v;
    auto b = v.begin(), e = v.end();    // b and e have the same type
    return 0;
}