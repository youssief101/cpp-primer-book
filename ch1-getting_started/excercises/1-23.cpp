// Write a program that reads several transactions and counts how many
// transactions occur for each ISBN.

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    // read a transaction, 
    if (std::cin >> item1) {
        // define a counter
        int counter{1};
        // keep reading transactions2
        while (std::cin >> item2) {
            // if transaction's2 isbn is equal to transaction1 isbn
            if (item1.isbn() == item2.isbn()) {
                // increment the counter
                ++counter;
            } else {
                std::cout << "the " << item1.isbn() << " transactions occured " << counter << " times" << std::endl;
                item1 = item2;
                counter = 1;
            }
        } // while loop ends here
        // print how many time transaction occured
        std::cout << "the " << item1.isbn() << " transactions occured " << counter << " times" << std::endl;
        return 0;
    } else {
        // trnsaction isnot valid
        std::cerr << "Transaction is not valid" << std::endl;
        return -1;
    }
}