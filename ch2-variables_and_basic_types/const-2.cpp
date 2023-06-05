#include <iostream>

int main() {
    int i = 42;
    int &r1 = i;        // r1 bound to i
    const int &r2 = i;  // r2 also bound to i; but cannot be used to change i
    r1 = 0;             // r1 is not const; i is now 0
    // r2 = 0;             // error: r2 is a reference to const
    std::cout << i << std::endl;
    return 0;
}