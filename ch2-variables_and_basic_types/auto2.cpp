#include <iostream>

int main() {
    auto i{0}, *p{&i};  // ok: i is int an p is a pointer to int
    auto sz{0}, pi{3.14};   // error: inconsistent types for sz and pi
    return 0;
}