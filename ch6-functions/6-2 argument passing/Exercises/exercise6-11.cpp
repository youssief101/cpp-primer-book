/* wirte and test your own version of reset that takes a reference */


#include <iostream>
using std::cout; using std::endl; using std::cin;

void reset(int &ivar) {
    /* a function that takes a reference and sets the referenced-to value to zero */
    ivar = 0;
}

int main() {
    // initialization phase
    int i{0};
    // get i from user
    cin >> i;
    cout << "i before resetting: " << i << endl;
    reset(i);
    cout << "i after resetting: " << i << endl;
    return 0;
}