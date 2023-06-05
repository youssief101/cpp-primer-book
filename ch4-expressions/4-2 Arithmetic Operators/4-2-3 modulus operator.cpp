#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int ival = 42;
    double dval = 3.14;

    cout << ival % 12 << endl; // ok: result is 6
    // ival % dval; // error: flaoting-point operand

    // modulus operations
    cout << 21 % 6 << endl;   // result is 3
    cout << 21 % 7 << endl;   // result is 0
    cout << -21 % -8 << endl; // result is -5
    cout << 21 % -5 << endl;  // result is 1

    // division operations
    cout << 21 / 6 << endl;   // result is 3
    cout << 21 / 7 << endl;   // result is 3
    cout << -21 / -8 << endl; // result is 2
    cout << 21 / -5 << endl;  // result is -4
    
    return 0;
}