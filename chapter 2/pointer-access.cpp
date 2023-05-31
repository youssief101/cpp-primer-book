#include <iostream>

int main() {
    int ival{42};
    int *p = &ival; // p holds the address of ival; p is a pointer ival
    std::cout << p << std::endl; // print the address of ival
    std::cout << *p << std::endl; // * yields the object to which p points; prints 42
    *p = 423;
    std::cout << ival << std::endl;
    return 0;
}