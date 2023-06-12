#include <iostream>
using std::cout; using std::endl; using std::cin;

// factorial of val is val * (val - 1) * (val - 2)......* ((val - (val-1)) * 1)
int fact(int val) {
    int ret = 1; // local variable to hold the result as we calculate it
    while (val > 1)
        ret *= val--; // assign (ret * val) to ret and decrement val 
    return ret; // return result
}

int main() {
    int val;
    cin >> val;
    int result = fact(val);
    cout << result << endl;
    return 0;
}