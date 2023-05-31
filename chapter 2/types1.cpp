#include <iostream>

int main() {
    typedef double wages;       // wages is a synonym for double
    typedef wages base, *p;     // wages is a synonym for double, p for double * 
    return 0;
}