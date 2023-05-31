#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item total, item;

    // read the first transaction
    if (std::cin >> total) {
        // keep reading item transactions
        while (std::cin >> item) {
            // if isbns match 
            if (total.isbn() == item.isbn()) {
                // add the item transaction to the total transaction
                total += item;
            } else {
                // invalid isbns don't match
                std::cerr << "ISBNs don't match" << std::endl;
                return -1;
            }
        }
        // print the summation of all transactions
        std::cout << "the summation of all transactions is: " << total << std::endl;
        return 0;
    } else {
        // transaction not valid print invalid input
        std::cerr << "No valid transaction input" << std::endl;
        return -1;
    }
}