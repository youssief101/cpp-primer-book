/*
    Assumming i is an int and d is a double write the expression i *= d, so
    that it does integeral, rather than floating point, multipilication
*/

#include <iostream>
using std::cout; using std::endl;

int main() {
    int i{20};
    double d{20.4};
    i *= static_cast<int>(d);
    cout << i << endl;
    return 0;
}