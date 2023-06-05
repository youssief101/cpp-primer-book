#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = 1024;
    int k = -i; // i is -1024

    bool b = true;
    /*
        in this case the value of b is true, which promtes to the int value 1.
        That value is negated, yielding -1. The value -1 is converted back to bool
        and used to initialize b2. This initializer is a non-zero value, which when
        converted to bool is true. Thus, the value of b2 is true!
    */
    bool b2 = -b; // b2 is ture!

    cout << b << " " << b2 << " " << endl;

    return 0;
}