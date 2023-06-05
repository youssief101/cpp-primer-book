#include <iostream>

int main() {
    const int ci = 1024;
    const int &rl = ci;     // ok: both reference and underlying object are const
    // rl = 42;                // error: rl is a reference to const
    // int &rl2 = ci;          // error: non const referenct to a const object
    return 0;
}