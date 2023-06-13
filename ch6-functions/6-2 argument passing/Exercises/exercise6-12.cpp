/*
    Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210) to use references 
    instead of pointers to swap the value of two  ints. Which version do you think 
    would be easier to use and why?
*/

#include <iostream>
using std::cout; using std::endl;

void swap(int &ivar1, int &ivar2) {
    int temp{ivar1};
    ivar1 = ivar2;
    ivar2 = temp;
}

int main() {
    int i1{20}, i2{30};
    cout << "before swapping: i1 = " << i1 << " " << "i2 = " << i2 << endl;
    swap(i1, i2);
    cout << "after swapping: i1 = " << i1 << " " << "i2 = " << i2 << endl;
    return 0;
}