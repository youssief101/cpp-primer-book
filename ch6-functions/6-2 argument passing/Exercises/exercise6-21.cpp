/*
    Write a function that takes an  int  and a pointer to an  int  and returns 
    the larger of the  int  value or the value to which the pointer points. 
    What type should you use for the pointer? 
*/

#include <iostream>
using std::cout; using std::endl;

#include "exercises_libs.h"

int main() {
    int ival1{10}, ival2{20};
    if (is_larger(ival1, &ival2)) {
        cout << ival1 << " is greater than " << ival2 << endl;
    } else {
        cout << ival2 << " is greater than " << ival1 << endl;
    }
    return 0;
}