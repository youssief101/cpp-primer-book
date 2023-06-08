#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <string>
using std::string;

int get_respond() {
    int respond;
    return cin >> respond, respond;
}

int main() {
    int i1{0}, i2{0};
    string rsp{""};
    // adding two numbers
    do {
        // ask user for two numbers to add
        cout << "Enter two numbers to add: ";
        cin >> i1 >> i2;
        cout << i1 << " + " << i2 << " = " << i1 + i2 << endl;
        cout << "do you want to add another two numbers: ";
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n');
    // uncomment to find bugs
    /*
    do {
        int ival = get_respond();
    } while (ival);
    */
    return 0;
}