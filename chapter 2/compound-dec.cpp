#include <iostream>

int main() {
    // i is an int; p is a pointer to int; r is a reference to int
    int i{1024}, *p = &i, &r = i;
    std::cout << "the variable i has value: " << i << std::endl;
    std::cout << "the pointer i has value: " << p << std::endl;
    std::cout << "the reference r has value: " << r << std::endl;
    return 0;
}