#include <iostream>
using std::cout;
using std::endl;

int main()
{
    // with parentheses
    cout << ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) << endl; // prints 91

    // without parentheses
    cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl; // prints 91

    return 0;
}