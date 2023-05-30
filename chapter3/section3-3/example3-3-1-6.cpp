#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main() {
    vector<int> ivec(10);   // each element initialized to 0
    vector<string> svec(10);    // each element initialized to empty string

    // print the size of ivec
    cout << ivec.size() << endl;
    // print the size of svec
    cout << svec.size() << endl;
    return 0;
}