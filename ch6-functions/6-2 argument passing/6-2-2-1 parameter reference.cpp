// funtion that takes a reference to an int and sets the given object to zero
#include <iostream>
using std::cout; using std::endl;

void reset(int &i) { // i is just another name for the object passed to reset
    i = 0;  // changes the value of the object to which it refers
}

int main() {
    int var = 20;
    reset(var);
    cout << var << endl;
    return 0;
}