#include <iostream>
using std::cout; using std::endl;

int main() {
    int someValue{1};
    int x{0}, y{0};
    someValue ? ++x, ++y : --x, --y;
    cout << someValue << endl;
    cout << x << endl;
    cout << y << endl;
    return 0;
}