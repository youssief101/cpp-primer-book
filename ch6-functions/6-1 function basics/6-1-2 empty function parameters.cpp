/*
    A function parameter list can be empty but cannot be omitted. Typically we 
    define a function with no parameters by writing an empty parameter list.
    for compatibility with C, we also can use the keyword void to indicate that 
    there are no parameters.
*/
#include <iostream>
using std::cout; using std::endl;

void printHello() {
    cout << "hello, world" << endl; // implicit void parameter list
}

// using void, compatible with C
void printWelcome(void) {
    cout << "Welcome, world" << endl; // explicit void parameter list
}

int main() {
    printHello();   // a function that prints hello, world
    printWelcome(); // a function that prints welcome, world
    return 0;
}