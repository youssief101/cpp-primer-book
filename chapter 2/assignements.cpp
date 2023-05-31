#include <iostream>

int main() {
    int i = 42;
    int *pi = 0;    // pi is initialized but addersses no object
    int *pi2 = &i;  // pi2 initialized to hold the address of i
    int *pi3;       // if pi3 is defined inside a block, pi3 is uninitialized
    pi3 = pi2;      // pi3 and pi2 address the same object, e.g.,i
    pi2 = 0;        // pi2 now adresses no object
    return 0;
}