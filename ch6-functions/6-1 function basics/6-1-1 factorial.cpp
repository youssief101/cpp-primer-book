#include <iostream>
using std::cout; using std::endl;

// factorial of val is val * (val - 1) * (val - 2)...*((val - (val - 1)) * 1)
int fact(int val) {
    int ret = 1; // local vairable to hold the result as we calculate it
    while (val > 1)
        ret *= val--; // assign (ret * val) to ret and decrement val
    return ret;       // return result
}

int main() {
    int result = fact(5); // result equals 120, i.2, the result of fact(5)
    cout << "5! is " << result << endl;
    return 0;
}