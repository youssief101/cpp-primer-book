#include <iostream>

int main() {
    int i = 42;         // initialize i to 42
    int *p1 = &i;       // declare pointer p1 to an int, and assign it to the address of i
    *p1 = *p1 * *p1;    // assigning i to 1764
    std::cout << i << std::endl;
    return 0;
}