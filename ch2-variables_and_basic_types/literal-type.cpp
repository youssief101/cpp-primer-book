#include <iostream>

int main() {
    std::cout << L'a' << std::endl;       // wide character literal, type is wchat_t
    std::cout << u8"hi!" << std::endl;    // utf-8 string literal (utf-8 encodes a unicode chatacter in 8 bits)
    std::cout << 42ULL << std::endl;      // unsigned integer literal, type is unsigned long long
    std::cout << 1E-3F << std::endl;      // signle-precision floating-point literal type is float
    std::cout << 3.14159L << std::endl;   // extended-precision floating-point literal, type is long double
}