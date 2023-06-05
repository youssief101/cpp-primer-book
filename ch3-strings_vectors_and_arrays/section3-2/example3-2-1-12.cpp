#include <iostream>
using namespace std;
#include <string>

int main() {
    string s1{"hello, "}, s2{"world\n"};
    string s3 = s1 + s2;    // s3 is "hello, world\n"
    cout << s3 << endl;
    s1 += s2;
    cout << s1 << endl;   // equivalent to s1 = s1 + s2
    return 0;
}