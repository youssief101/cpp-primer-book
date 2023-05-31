#include <iostream>

int main() {
    int i = 0;
    // (a)
    // double *dp = &i; // not valid because pointers have to be assigned to the same datatype
    // (b)
    // int *ip = i; // not valid due to the missing & address-of-operator
    // (c)
    int *p = &i; // valid have not syntaxical or logical error
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    int *nullpointer = 0;
    std::cout << nullpointer << std::endl;
    return 0;
}