#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = 0, j;
    j = ++i;    // j = 1, i = 1; prefix yields the incremented value
    cout << j << " " << i << endl;
    
    j = i++;    // j = 1, i = 2; postfix yields the unincremented value
    cout << j << " " << i << endl;
    
    return 0;
}