#include <iostream>
using std::cout; using std::endl;

int fact(int i) {
    int result{1};
    while (i > 0)
        result *= i--;
    return result;
}

int main() {
    int value = fact(5);
    cout << value << endl;
    return 0;
}