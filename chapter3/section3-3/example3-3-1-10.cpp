#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main() {
    vector<string> v1{"hi"};    // list initialization: v5 has one element
    vector<string> v2("hi");    // error: can't construct a vector from a string
    vector<string> v7{10};      // v7 has 10 initialized elements
    vector<string> v8 {10, "hi"};   // v8 has ten elements with value "hi"
    return 0;
}