#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << (5 + ((10 * 20) / 2)) << endl; // prints 105

    int temp = 10 * 20;
    int temp2 = temp / 2;
    int result = temp2 + 5;

    cout << result << endl; // prints 105
    return 0;
}