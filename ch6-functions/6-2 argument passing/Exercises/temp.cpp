#include <iostream>
using std::cout; using std::endl;

int main() {
    int ival1{10}, ival2{20};
    int *ptr1 = &ival1, *ptr2 = &ival2;
    int *ptr01 = ptr2, *ptr02 = ptr1;
    cout << ptr1 << "\n" << ptr01 << "\n" << ptr2 << "\n" << ptr02 << "\n" << endl;
    return 0;
}