#include <string>
using std::string;

int main()
{
    int ival, jval;  // ival, jval are ints;
    ival = jval = 0; // ok: each assigned 0

    int *pval; // pval is a pointer to int

    ival = (pval = 0); // error: cannot assign the value of a pointer to an int

    string s1, s2;
    s1 = s2 = "OK"; // string literal "OK" converted to string
    return 0;
}