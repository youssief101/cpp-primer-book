#include <iostream>
using std::cout;
using std::endl;

int main()
{
    /*
        the compiler might evaluate ++i before evaluating i, in which case
        the output will be 1 1.
        Or the compiler might evaluate i first, in which case the ouput will
        be 0 1. Or the compiler might do something else entirely.
    */
    int i = 0;
    cout << i << " " << ++i << endl; // undefined
    return 0;
}