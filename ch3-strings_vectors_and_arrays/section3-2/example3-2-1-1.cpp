#include <iostream>
using namespace std;
#include <string>

int main() {
    string s1;  // default initialization; s1 is the empty string
    string s2 = s1; // s2 is a copy of s1
    string s3 = "hiya"; // s3 is a copy of the string literal
    string s4(10, 'c'); // s4 is cccccccccccc
    return 0;
}