/*
    List three ways to define a vector and give it ten elements, 
    each with the value 42. Indicate whether there is a preferred 
    way to do so and why
*/

using namespace std;
#include <iostream>
#include <vector>

int main() {
    // method 1
    vector<int> ivec1(10, 42);
    // check answer
    for (auto i : ivec1) {
        cout << i << " ";
    }
    cout << endl;

    // method 2
    vector<int> ivec2;
    for (int i{0}; i != 10; i++) {
        ivec2.push_back(42);
    }
    // check answer
    for (auto i : ivec2) {
        cout << i << " ";
    }
    cout << endl;

    // method 3
    vector<int> ivec3(10);
    for (int i{0}; i < ivec3.size(); i++) {
        ivec3[i] = 42;
    }
    // check answer
    for (auto i : ivec3) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}