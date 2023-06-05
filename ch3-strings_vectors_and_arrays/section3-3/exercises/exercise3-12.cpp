using namespace std;
#include <string>
#include <vector>

int main() {
    vector<vector<int>> ivec;   // legal initialization: ivec is a vector that has elements of vectors each has int elements
    vector<string> svec = ivec; // illegal initialization: ivec has integer elements while svec has string elements
    vector<string> svec(10, "null");    // legal vector constructed of 10 elements each initialized to string "null"
    return 0;
}