#include <iostream>
using namespace std;
#include "Sales_Data.h"


int main() {
    // exercise 1.9 p13
        // write a program that uses a while to sum the numbers from 50 to 100
    int i{50};
    int sum{0};
    while (i <= 100) {
        sum += i;
        i++;
    }
    cout << sum << endl;

    // exercise 1.10 p13
        // use the decrement operator to write a while that prints the numbers from ten down to zero
    int k{10};
    while (k >= 0) {
        cout << k << endl;
        k--;
    }

    // Write a program that prompts the user for two integers. Print each number in the range specified by those two integers
    int x{0}, y{0};
    cin >> x >> y;
    if (x < y) {
        while (x <= y) {
            cout << x << endl;
            x++;
        }
    } else {
        cout << "first number must be smaller than the last number!" << endl;
    }

    // solving the sales problem
    double price{0};
    Sales_data data1, data2;
    // read ISBN1
    cin >> data1.bookName >> data1.units_sold >> price;
    // calculate total revenue
    data1.revenue = data1.units_sold * price;
    // read ISBN2
    cin >> data2.bookName >> data2.units_sold >> price;
    // calculate total revenue
    data2.revenue = data2.units_sold * price;

    if (data1.bookName == data2.bookName) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        // Print: ISBN, total sold, total revenue, average price per book
        cout << data1.bookName << " " << totalCnt
            << " " << totalRevenue << " ";
        if (totalCnt != 0) {
            cout << totalRevenue/totalCnt << endl;
        } else {
            cout << "(no sales)" << endl;
        }
        return 0;   // indicate success
    }
    else { // transactions weren't for the same ISBN
        cerr << "Data must refer to the same ISBN" << endl;
        return -1;  // indicate failure
    }
}