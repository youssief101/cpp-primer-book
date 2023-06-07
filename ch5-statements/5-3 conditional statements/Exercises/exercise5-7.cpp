#include <iostream>
using std::cin; using std::cout; using std::endl;

int get_value() {
    int userInput{0};
    return cin >> userInput, userInput;
}

int main() {
    int ival1{15}, ival2{15}, minval{100}, occurs{0};

    // a
    if (ival1 != ival2)
        ival1 = ival2;  // missing semi-colon
    else ival1 = ival2 = 0;
    cout << ival1 << " " << ival2 << endl;

    // b
    if (ival1 < minval) {
        minval = ival1;
        occurs = 1;
    }
    cout << minval << " " << ival1 << " " << occurs << endl;

    // c
    // ival was declared inside the if statement, outside that scope it doesn't work
    int ival{0};
    if (ival = get_value()) {
        cout << "ival = " << ival << endl;
    }
    if (!ival)
        cout << "ival = 0" << endl;

    if (ival == 0)
        ival = get_value();
    return 0;
}