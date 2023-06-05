/*
Write a program to print the size and contents of the vectors 
from exercise 3.13. Check whether your answers to that exercise were correct. 
If not, restudy § 3.3.1 (p. 97) until you understand why you were wrong
*/
#include <iostream>
#include <string>
using namespace std;
#include <vector>

int main() {
    vector<int> v1; // empty string: undefined behaviour
    vector<int> v2(10); 
    vector<int> v3(10, 42); 
    vector<int> v4{10}; 
    vector<int> v5{10, 42}; 
    vector<string> v6{10}; 
    vector<string> v7{10, "hi"}; 
    // v2
    cout << "size: " << v2.size() << "\n";
    cout << "content: ";
    for (auto i : v2) {
        cout << i << " ";
    }
    cout << endl;

    // v3
    cout << "size: " << v3.size() << "\n";
    cout << "content: ";
    for (auto i : v3) {
        cout << i << " ";
    }
    cout << endl;

    // v4
    cout << "size: " << v4.size() << "\n";
    cout << "content: ";
    for (auto i : v4) {
        cout << i << " ";
    }
    cout << endl;

    // v5
    cout << "size: " << v5.size() << "\n";
    cout << "content: ";
    for (auto i : v5) {
        cout << i << " ";
    }
    cout << endl;

    // v6
    cout << "size: " << v6.size() << "\n";
    cout << "content: ";
    for (auto i : v6) {
        cout << i << " ";
    }
    cout << endl;

    // v7
    cout << "size: " << v7.size() << "\n";
    cout << "content: ";
    for (auto c : v7) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}