#include <iostream>
using std::cout;
using std::endl;

int main()
{
    // bitwise shift operators <<, >>
    // 0233 is an acutal octal literal
    unsigned char bits = 0233;    // 1 0 0 1 1 0 1 1
    cout << (bits << 8) << endl;  // bits promoted to int and then shifted by 8 bits
    cout << (bits << 31) << endl; // left shift 31 bits, left-most bits discraded
    cout << (bits >> 3) << endl;  // rigt shift 3 bits, 3 right-most bits discarded

    // bitwise not operator ~
    unsigned char bits2 = 0227; // 1 0 0 1 0 1 1 1
    // 0 0 0 0 0 0 0 0 | 0 0 0 0 0 0 0 0 | 0 0 0 0 0 0 0 0 | 1 0 0 1 0 1 1 1
    // 1 1 1 1 1 1 1 1 | 1 1 1 1 1 1 1 1 | 1 1 1 1 1 1 1 1 | 0 1 1 0 1 0 0 0 
    cout << (~bits2) << endl;

    // bitwise AND, OR, XOR operators
    unsigned char b1 = 0145;    // 0 1 1 0 0 1 0 1
    unsigned char b2 = 0257;    // 1 0 1 0 1 1 1 1
    cout << (b1 & b2) << endl;  // 0 0 1 0 0 1 0 1
    cout << (b1 | b2) << endl;  // 1 0 1 0 1 1 1 1
    cout << (b1 ^ b2) << endl;  // 1 1 0 0 1 0 1 0
    return 0;
}