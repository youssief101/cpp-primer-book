#include <iostream>
using std::cout; using std::endl; using std::cin; using std::cerr;

#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    cin >> item1 >> item2;
    // first check if item1, and item2 represent the same book
    if (item1.isbn() == item2.isbn()) {
        cout << item1 + item2 << endl;
        return 0; // indicate success
    } else {
        cerr << "Data must refer to the same ISBN" << endl;

        return -1; // indicate failure
    }

    return 0;
}