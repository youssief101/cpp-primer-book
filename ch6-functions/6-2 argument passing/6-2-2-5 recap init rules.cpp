// general ruls of initializations

#include <string>
using std::string;

#include "find_char.h"

void reset(int *ip) {
    /* reset takes a pointer ip as a parameter */
    *ip = 0;
}

void reset(int &rp) {
    /* reset takes a reference rp as a parameter */
}

int main() {
    int i = 42;
    const int *cp = &i; // ok: but cp can't change i
    const int &r = i;   // ok: but r can't change i
    const int &r2 = 42; // ok
    // uncomment to find bugs!
    /*
    int *p = cp;        // error: types of p and cp don't match
    int &r3 = r;        // types of r3 and r don't match
    int &r4 = 42;       // error: can't initialize a plain reference from a literal
    */

    // operations of function reset
    int k{0};
    const int ck = k;
    string::size_type ctr{0};

    // uncomment to find bugs
    reset(&k);  // calls the version of reset that has an int*
    // reset(&ck); // eror: can't initialize an int* from a pointer to a const int object
    reset(k);   // ok: calls the version of reset that has an int& paramter
    // reset(ck);  // error: can't bind a plain reference to the const object ck
    // reset(42);  // error: can't bind a plain reference to a literal
    // reset(ctr); // error: types don't match; ctr has an unsigned type
    // ok: find_char's first parameter is a reference const
    find_char("hello world!", 'o', ctr);
    return 0;
}