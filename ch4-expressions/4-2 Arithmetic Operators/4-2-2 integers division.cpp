#include <iostream>
using std::cout;
using std::endl;

int main()
{
    // ival1 is 3; result is truncated; remainder is discarded
    int ival1 = 21 / 6;

    // ival2 is 3; no remainder; result is integral value
    int ival2 = 21 / 7;

    cout << ival1 << " " << ival2 << endl; // prints 3 3
    return 0;
}