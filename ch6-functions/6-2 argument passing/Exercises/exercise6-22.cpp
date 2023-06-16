#include <iostream>
using std::cout; using std::endl;

#include "exercises_libs.h"

int main() {
    int ival1{10}, ival2{20};
    int *ptr1{&ival1}, *ptr2{&ival2};
    // before swapping
    cout << "pointer 1 points to " << ptr1 << endl;
    cout << "pointer 2 points to " << ptr2 << endl;
    // after swapping
    swap_ptr(ptr1, ptr2);
    cout << "pointer 1 points to " << ptr1 << endl;
    cout << "pointer 2 points to " << ptr2 << endl;
    return 0;
}