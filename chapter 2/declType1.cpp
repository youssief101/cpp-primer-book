#include <iostream>

int main() {
    const int ci{0}, &cj{ci};
    decltype(ci) x{0};  // x has type const int
    decltype(cj) y = x; // y has type const int & and is bound to x
    decltype(cj) z;     // error; z is a reference and must be initialized
    return 0;
}