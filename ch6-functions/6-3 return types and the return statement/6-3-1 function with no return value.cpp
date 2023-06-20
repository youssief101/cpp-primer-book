#include <iostream>
using namespace std;

void swap(int &v1, int &v2) {
    // if the values are already the same, no need to swap just return 
    if (v1 == v2)
        return;
    // if we're here, there's work to do
    else {
        int temp = v2;
        v2 = v1;
        v1 = temp;   
    // no explicit return necessary
    }
}

int main() {
    int ival1{10}, ival2{20};
    swap(ival1, ival2);
    cout << ival1 << " ," << ival2 << endl;
    return 0;
}