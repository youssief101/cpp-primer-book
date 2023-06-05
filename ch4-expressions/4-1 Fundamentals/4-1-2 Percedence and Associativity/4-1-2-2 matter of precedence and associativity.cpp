#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int ia[] = {0, 2, 4, 6, 8}; // array with five elements of type int
    int last1 = *(ia + 4);      // initializes last to 8, the value of ia[4]
    int last2 = *ia + 4;        // last = 4, equivalent to ia[0] + 4

    cout << last1 << endl; // prints 8
    cout << last2 << endl; // prints 4
    return 0;
}