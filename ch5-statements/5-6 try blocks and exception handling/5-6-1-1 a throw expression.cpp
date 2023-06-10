#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <stdexcept>
using std::runtime_error;

#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    cin >> item1 >> item2;
    // first check if item1, and item2 represent the same book
    // first check that the data are for the same item
    if (item1.isbn() != item2.isbn()) {
        throw runtime_error("Data must refer to the same ISBN");
    }
    else {
        cout << item1 + item2 << endl;

        return 0; // indicate success
    }
}