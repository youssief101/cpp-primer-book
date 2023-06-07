#include <iostream>
using std::cout; using std::endl;

int main() {
    cout << "bool: " << sizeof(bool) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "unsigned short: " << sizeof(unsigned short) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "unsigned long: " << sizeof(unsigned long) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;
    cout << "unsigned long long: " << sizeof(unsigned long long) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "long double: " << sizeof(long double) << " bytes" << endl;
    cout << "wchar_t: " << sizeof(wchar_t) << " bytes" << endl;
    cout << "char16_t: " << sizeof(char16_t) << " bytes" << endl;
    cout << "char32_t: " << sizeof(char32_t) << " bytes" << endl;
    cout << "nullptr: " << sizeof(nullptr) << " bytes" << endl;
    return 0;
}