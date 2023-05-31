#include <iostream>

int main() {
    const int i{20};
    int k{60};
    const int *pi{&i};      // define a pointer that points to a low level const
    int *const pk{&k};      // define a top-level pointer
    return 0;
}