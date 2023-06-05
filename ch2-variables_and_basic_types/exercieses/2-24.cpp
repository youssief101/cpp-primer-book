#include <iostream>

int main() {
    int i = 42;
    void *p = &i; // valid void* pointer accept pointing to any object, regardless its type!
    // long *lp = &i; // error assigning a pointer to an int a data type long int
    std::cout << "the variable i has value " << i << " and a memory address of " << p << std::endl;
    return 0;
}