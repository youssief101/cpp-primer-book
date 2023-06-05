#include <iostream>

int main() {
    int a{3}, b{4}; // a is int, b is int
    decltype(a) c = a;  // c is an int
    decltype((b)) d = a;    // d is a reference to int initialized to a
    ++c;    // incrementing to int
    ++d;    // incrementing to int
    return 0;
}