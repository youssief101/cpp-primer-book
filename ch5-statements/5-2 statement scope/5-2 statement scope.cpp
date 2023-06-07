#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <vector>
using std::vector;

int get_num();

int main() {
    while (int i = get_num()) { // i is created and initialized on each iteration
        cout << i << endl;
    }
    // uncomment to find the error
    // i = 0; // error: i is not accessible outside the loop

    // find the first negative element
    vector<int> ivec = {1, 2, 3, -2, 10, 5};
    vector<int>::iterator beg = ivec.begin();
    while (beg != ivec.end() && *beg >= 0) {
        cout << *beg << " ";
        ++beg;
    }
    if (beg == ivec.end())
    ;   // we know that all elements in v are greater than or equal to zero
    return 0;
}

int get_num() {
    int user_input{0};
    return cin >> user_input, user_input;
}