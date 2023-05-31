#include <iostream>

int main() {
    int ival = 42;
    int *p = &ival; // p holds the address of ival; p is a pointer to ival
    std::cout << p << std::endl;
    int &val = ival; // val is a reference acting as a alias for ival
    std::cout << val << std::endl;
    return 0;
}