using namespace std;
#include <string>
#include <vector>

int main() {
    // (a)
    vector<int> v1; // number of elements: 0, values: 0
    // (b)
    vector<int> v2(10); // number of elements 10: , values: 0 
    // (c)
    vector<int> v3(10, 42); // number of elements: 10, values: 42
    // (d)
    vector<int> v4{10}; // number of elements: 1, values: 10 
    // (e)
    vector<int> v5{10, 42}; // number of elements: 2, values: 10, 42
    // (f)
    vector<string> v6{10}; // number of elements: 10, values: empty
    // (g)
    vector<string> v7{10, "hi"}; // number of elements: 10, values: "hi"
    return 0;
}