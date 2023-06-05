#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << 42 + 10 << endl;   // ok: + has higher percedence, so the sum is printed
    cout << (10 < 42) << endl; // ok: parentheses force intended grouping; prints
    // cout << 10 < 42 << endl;   // error: attempt to compare cout to 42!
    return 0;
}