#include <iostream>
using std::cout; using std::endl;

int main() {
    // one way to understand the arithmetic conversions is to study lots of exmaples:
    bool flag;  char cval;
    short sval; unsigned short usval;
    int ival;   unsigned int uival;
    long lval;  unsigned long ulval;
    float fval; double dval;

    // list of implicit conversions
    3.14159L + 'a'; // a promoted to int, then that int converted to long double
    dval + ival;    // ival converted to double
    dval + fval;    // fval converted to float
    ival = dval;    // dval converted (by truncation) to int
    flag = dval;    // if dval is 0, then flags is false, otherwise flag is true
    cval + fval;    // cval prompted to int, then that int converted to float
    sval + cval;    // sval and cval promoted to int
    cval + lval;    // cval converted to long
    ival + ulval;   // ival converted to unsigned long
    usval + ival;   // promotion depends on the size of unsigned short and int
    uival + lval;   // conversion depends on the size of unsigned int and long
    return 0;
}