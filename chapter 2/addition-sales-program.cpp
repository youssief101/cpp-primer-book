#include <iostream>
#include <string>
#include "sales_data.h"

int main() {
    Sales_data data1, data2;
    // code to read into data1 data2
    double price{0};    // price per book, used to calculate total revenue
    // read the first transaction: ISBN, number of books sold, price per book
    std::cin >> data1.bookNo >> data1.units_sold >> price;

    // calculate total revenue from price and units_sold
    data1.revenue = data1.units_sold * price;

    // read the second transaction: ISBN, number of books sold, price per book
    std::cin >> data2.bookNo >> data2.units_sold >> price;

    // calculate total revenue from price and units_sold
    data2.revenue = data2.units_sold * price;

    // code to check whether data1 and data2 have the same ISBN
    if (data1.bookNo == data2.bookNo) {
        unsigned totalUnits = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        
        // print: ISBN, total sold, total revenue, average price per book
        std::cout << data1.bookNo << " " << totalUnits
                << " " << totalRevenue << " ";
        if (totalUnits != 0) {
            std::cout << totalRevenue / totalUnits << std::endl;
        } else {
            std::cout << "(no sales)" << std::endl;
        }

        //  and if print the sum of data1 and data2
        return 0;
        
    } else {    // transaction weren't for the same ISBN
        std::cerr << "Data must refer to the smae ISBN" << std::endl;
        return -1;  // indicate failure
    }

}