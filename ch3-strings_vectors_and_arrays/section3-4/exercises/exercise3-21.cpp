/*
    Redo the first exercise from § 3.3.3 (p. 105) using iterators.
    Write a program to print the size and contents of the vectors from
    exercise 3.13. Check whether your answers to that exercise were correct. If not, restudy
    § 3.3.1 (p. 97) until you understand why you were wrong
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
    for (auto it = v2.begin(); it != v2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // v3
    for (auto it = v3.begin(); it != v3.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // v4
    for (auto it = v4.begin(); it != v4.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // v5
    for (auto it = v5.begin(); it != v5.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // v6
    for (auto it = v6.begin(); it != v6.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    // v7
    for (auto it = v7.begin(); it != v7.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}