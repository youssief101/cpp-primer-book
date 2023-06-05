#include <iostream>

int main() {
    int i{0};
    int *const p1{&i};      // we can't change the value of p1; const is top-level
    const int ci{42};       // we can't change the value of ci; const is top-level
    const int *p2{&ci};     // we can change p2; const is low level
    const int *const p3{p2};    // right-most const is top-level, left most is not
    const int &r{ci};       // const in refernce types is always low-level
    std::cout << i << std::endl;
    std::cout << p2 << std::endl;
    i = ci;                 // ok: copying the value of ci; top-level const in ci is ignored
    p2 = p3;                // ok: pointed-to type matches; top-level const in p3 is ignored
    // int *p{p3};             // error: p3 is a top-level pointer that can't be assigned to another variable
    p2 = &i;                // ok: we can convert int* to const int*
    // int &r = ci;            // error: can't bind an ordinary int& to a const int object
    const int &r2 = i;      // ok can bind const int& to plain int
    return 0;
}