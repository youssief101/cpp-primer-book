#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main() {
    vector<int> ivec(10, -1);   // ten int elements, each initialized to -1
    vector<string> svec(10, "hi!"); /// ten strings; each element is "hi!"
    // printing the vector ivec
    for (auto i : ivec) {
        cout << i << endl;
    }

    // printing the vector svec
    for (auto s : svec) {
        cout << s << endl;
    }
    return 0;
}