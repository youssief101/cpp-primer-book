#include <iostream>

int main() {
    int i, *const cp;       // constant pointers must be initialized
    int *p1, *const p2;     // constant pointers must be initialized
    const int ic, &r = ic;  // ic not initialized, const reference is valid
    const int *const p3;    // p3 is not initialized
    const int *p;           // p is valid because its declared as a non-const pointer that points to a const integer
    return 0;
}