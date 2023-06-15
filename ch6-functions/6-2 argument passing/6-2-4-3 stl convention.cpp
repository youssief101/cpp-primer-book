#include <iostream>
using std::cout; using std::endl;

#include <array>
using std::begin;
using std::end;

void print(const int *beg, const int *end) {
    while (beg != end) {
        cout << *beg++ << endl; // print current element, advance next
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    print(begin(arr), end(arr));
    return 0;
}