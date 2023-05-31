#include <iostream>

int main() {
    int i = -1, &r = 0;     // non-const reference can't be assigned to a literal
    int *const p2 = &i2;    // i2 is a non-initialized variable
    const int i = -1, &r = 0;   // i is assigned as int, can't be reassigned as const int
    const int *const p3 = &i2;  // i2 is a non-initialized variable
    const int *p1 = &i2;        // i2 is a non-initialized variable
    const int &const r2;        // i2 is a non-initialized variable
    const int i2 = i, &r = i;   // can't assign a constant to a vairable
    int i, *const cp;       // constant pointers must be initialized
    int *p1, *const p2;     // constant pointers must be initialized
    const int ic, &r = ic;  // ic not initialized, const reference is valid
    const int *const p3;    // p3 is not initialized
    const int *p;           // p is valid because its declared as a non-const pointer that points to a const integer
    return 0;
}