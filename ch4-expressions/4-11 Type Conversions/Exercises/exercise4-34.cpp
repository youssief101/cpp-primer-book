#include <iostream>
using std::cout; using std::endl;

int main() {
    float fval;
    double dval;
    int ival;
    char cval;

    if (fval) // if fval is 0 it will be converted to false, otherwise condition evaluates true
    dval = fval + ival; // ival is converted to fval then the result converted to double
    dval + ival * cval; // cval will get promoted to int, then ival implicitly converted to double, summation yields double
    return 0;
}