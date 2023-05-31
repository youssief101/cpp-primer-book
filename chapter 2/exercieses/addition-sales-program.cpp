#include <iostream>
#include <string>
#include "Sales_data.h"

int main() {
    // define first, second items
    Sales_data book1, book2;
    double price{0.0};

    // get book data from user
    // get book1 data
    std::cin >> book1.bookName >> book1.unitsSold >> price;
    book1.revenue = book1.unitsSold * price;

    // get book2 data
    std::cin >> book2.bookName >> book2.unitsSold >> price;
    book2.revenue = book2.unitsSold * price;

    // compare book1 to book2
    //  if they are equal
    if (book1.bookName == book2.bookName) {
        // add them
        int totalUnits = book1.unitsSold + book2.unitsSold;
        int totalRevenue = book1.revenue + book2.revenue;

        // print ISBN
        std::cout << book1.bookName << " " << totalUnits << " " << totalRevenue << " ";
        
        // calculate average price
        if (totalUnits != 0) {
            std::cout << totalRevenue / totalUnits << std::endl;
        }
        return 0;
    } else {    // transactions are not the same
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;  // indicate failure
    }
}
