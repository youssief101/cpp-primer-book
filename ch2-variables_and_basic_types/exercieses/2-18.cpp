#include <iostream>

int main() {
    int ival = 1024;
    int ival2 = 2024;
    int *pi = &ival;
    std::cout << pi << std::endl;
    // code to change the value to which the pointer points
    *pi = 24;
    std::cout << "pi is " << pi << std::endl;
    std::cout << "ival: changed from 1024 to " << ival << std::endl;
    // code to change the value of a pointer.
    pi = 0;
    std::cout << "Pointer pi changed to the value: " << pi << std::endl;
    return 0;
}