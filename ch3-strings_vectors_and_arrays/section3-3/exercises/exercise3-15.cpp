/*
    Repeat the previous program but read strings this time
*/
#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main() {
    string user_input;
    vector<string> svec;
    while (cin >> user_input) {
        svec.push_back(user_input);
        cout << "adding " << user_input << endl;
    }
    return 0;
}