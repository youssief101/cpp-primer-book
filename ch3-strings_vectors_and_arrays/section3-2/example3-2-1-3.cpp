#include <iostream>
using namespace std;
#include <string>

int main() {
    // Table of common string initializations
    string s1;      // s1 is empty string
    string s2(s1);  // s2 is a copy of s1 using direct initialization
    string s3 = s1; // s3 is a copy of s1 using the copy initialization
    string s4("value"); // s4 is a copy of the string literal "value" using the direct initialization
    string s5 = "value";    // s5 is a copy of the string literal "value" using copy initialization
    int n{20};
    string s6(n, 'c');  // initialize s6 with n copies of the character 'c'
    
    cout << s1 << "\n" << s2 << "\n" << s3 << "\n" 
         << s4 << "\n" << s5 << "\n" << s6 << endl;
    return 0;
}