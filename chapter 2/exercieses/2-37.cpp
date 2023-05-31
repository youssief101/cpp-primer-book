#include <iostream>

int main() {
    int a{3}, b{4}; // a, b are integers
    decltype(a) c = a;  // c is int
    decltype(a = b) d = a;  // d is a reference to int initialized to a
    std::cout << d << std::endl;
    a = 20;
    std::cout << d << std::endl;
    return 0;
}
