#include <iostream>

int main() {
    int ival = 1024;
    int *pi = 0;        // pi is a valid, null pointer
    int *pi2 = &ival;   // pi2 is a valid pointer that holds the address of ival
    if (pi)     // pi has value 0, so condition evalutaes as false
        // ...
        if (pi2) // pi2 points to ival, so it is not 0; the condition evaluates to true
        // ...
    return 0;
}