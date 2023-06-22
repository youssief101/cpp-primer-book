#include <iostream>
using namespace std;

int factorial(int val) {
    if (val > 1)
        return factorial(val--) * val;
    return 1;
}

int main() {
    int i{10};
    cout << "Factorial of " << i << " is " << factorial(i) << endl;
    return 0;
}