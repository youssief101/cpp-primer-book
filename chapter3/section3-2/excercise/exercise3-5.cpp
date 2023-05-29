/*
    write a program to read strings from the standard input,
    concatenating what is read into one large string. Print the
    concatenated string. Next, change the program to separate adjacent input
    strings by a space
*/

#include <iostream>
using namespace std;
#include <string>

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    cout << s1  + s2  + s3 << endl;
    cout << s1  + " " + s2  + " " + s3 << endl;
    return 0;
}