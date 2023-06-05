/*
    Redo the last exercise from § 3.3.3 (p. 105) using iterators.

    exercise 3-16: : Write a program to print the size and contents of the vectors from
    exercise 3.13. Check whether your answers to that exercise were correct. If not, restudy
    § 3.3.1 (p. 97) until you understand why you were wrong
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // exercise 3-16
    vector<int> v1;              // number of elements: 0, values: 0
    vector<int> v2(10);          // number of elements 10: , values: 0
    vector<int> v3(10, 42);      // number of elements: 10, values: 42
    vector<int> v4{10};          // number of elements: 1, values: 10
    vector<int> v5{10, 42};      // number of elements: 2, values: 10, 42
    vector<string> v6{10};       // number of elements: 10, values: empty
    vector<string> v7{10, "hi"}; // number of elements: 10, values: "hi"

    // print the content and the size of v1
    for (auto iterv1 = v1.begin(); iterv1 != v1.end(); iterv1++)
    {
        cout << *iterv1 << " ";
    }
    cout << endl;

    // print the content and the size of v2
    for (auto iterv2 = v2.begin(); iterv2 != v2.end(); iterv2++)
    {
        cout << *iterv2 << " ";
    }
    cout << endl;

    // print the content and the size of v3
    for (auto iterv3 = v3.begin(); iterv3 != v3.end(); iterv3++)
    {
        cout << *iterv3 << " ";
    }
    cout << endl;

    // print the content and the size of v4
    for (auto iterv4 = v4.begin(); iterv4 != v4.end(); iterv4++)
    {
        cout << *iterv4 << " ";
    }
    cout << endl;

    // print the content and the size of v5
    for (auto iterv5 = v5.begin(); iterv5 != v5.end(); iterv5++)
    {
        cout << *iterv5 << " ";
    }
    cout << endl;

    // print the content and the size of v6
    for (auto iterv6 = v6.begin(); iterv6 != v6.end(); iterv6++)
    {
        cout << *iterv6 << " ";
    }
    cout << endl;

    // print the content and the size of v7
    for (auto iterv7 = v7.begin(); iterv7 != v7.end(); iterv7++)
    {
        cout << *iterv7 << " ";
    }
    cout << endl;
    return 0;
}