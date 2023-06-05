#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const char *cp = "Hello World";
    /*
        in a condition:
        a pointer evaluates to true if it points to a valid memory address. or not a NULL
            in this context cp evaluates to true if its pointing to a valid memory address,
        a dreferencing of a variable evaluates to true if the result is a non-zero value
            in this context the dereference of cp evaluates to a non-zero value which is true
    */
    if (cp && *cp)
    {
        cout << "both evaluate to true!" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}