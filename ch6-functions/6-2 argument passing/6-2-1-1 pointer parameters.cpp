#include <iostream>
using std::cout; using std::endl;

void reset(int *ip) {
    *ip = 20; // changes the value of the object to which ip points
    ip = 0;  // changes only the local copy of ip; the argument is unchangeed
}

int main() {
    int var{0};
    int *intp = &var;
    reset(intp); // value of var changes due to change to the pointer in the reset function
    cout << var << endl;
    return 0;
}