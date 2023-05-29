#include <iostream>
using namespace std;
#include <string>

int main() {
    /* the size of the string is of type std::string::size_type
        so using the new c++11 standard we can use auto to hold the 
        percise size, but the most apropriote one is unsigned
    */
    string line;
    getline(cin, line);
    auto len = line.size(); 
    cout << len << endl;
    return 0;
}