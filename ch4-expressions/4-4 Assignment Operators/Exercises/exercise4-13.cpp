#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i;
    double d;
    d = i = 3.5;
    cout << "d = " << d << endl; // prints 3
    cout << "i = " << i << endl; // prints 3
    i = d = 3.5;
    cout << "d = " << d << endl; // prints 3.5
    cout << "i = " << i << endl; // prints 3
    return 0;
}