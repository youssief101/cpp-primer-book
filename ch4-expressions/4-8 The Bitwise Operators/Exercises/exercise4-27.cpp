#include <iostream>
using std::cout; using std::endl;

int main() {
    unsigned long ul1 = 3, ul2 = 7;
    // a
    // 00000011 & 00000111 = 00000011
    cout << (ul1 & ul2) << endl;    // prints 3
    // b
    // 00000011 | 00000111 = 00000111
    cout << (ul1 | ul2) << endl;    // prints 7
    // c
    // ul1 is a non-zero value also ul2 evaluates to true
    cout << (ul1 && ul2) << endl;    // prints 1
    // ul1 is a non-zero value soevaluates to true
    cout << (ul1 || ul2) << endl;    // prints 1
    return 0;
}