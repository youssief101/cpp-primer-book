#include <iostream>
using std::cout; using std::endl;

// a function that returns the absolute value of an argument
double absolute(double i) {
    return (i > 0 ? i : -i);
}

int main() {
    double value = absolute(-20.42);
    cout << value << endl;
    return 0;
}