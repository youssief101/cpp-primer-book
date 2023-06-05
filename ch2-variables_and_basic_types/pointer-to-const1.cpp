#include <iostream>

int main() {
    const double pi{3.14};      // pi is const; its value may not be changed
    double pi2{30.14};
    // double *ptr{&pi};           // error: ptr is a plain pointer
    const double *cptr{&pi};    // ok cptr amy point to a double that is const
    // *cptr = 42;                 // error cannot assign to *cptr
    double dval{3.14};          // dval is a double; its value can be changed
    cptr = &dval;               // ok: but can't change dval through cptr
    std::cout << cptr;
    dval = 20.4;
    std::cout << cptr;
    return 0;
}