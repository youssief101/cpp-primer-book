/*
    Using pointers, write a function to swap the values of two  ints. 
    Test the function by calling it and printing the swapped values. 
*/

#include <iostream>
using std::cout; using std::endl;

void swap(int *ip1, int *ip2) {
    int temp = *ip1;
    *ip1 = *ip2;
    *ip2 = temp;
}

int main() {
    int var1{10};
    int var2{20};
    swap(&var1, &var2);
    cout << "var1 = " << var1 << ", var2 = " << var2 << endl;
    return 0;
}