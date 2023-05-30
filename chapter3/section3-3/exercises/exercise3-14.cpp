/*
    write a program that read a sequence of ints from cin and store 
    those values in a vector
*/
#include <iostream>
using namespace std;
#include <vector>

int main() {
    int user_input;
    vector<int> ivec;
    while (cin >> user_input) {
        ivec.push_back(user_input);
        cout << "adding " << user_input << endl;
    }
    return 0;
}