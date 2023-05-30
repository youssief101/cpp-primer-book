/* 
    Is the following program legal? If not, how might you fix it?
*/
using namespace std;
#include <iostream>
#include <vector>

int main() {
    /*
    vector<int> ivec;
    ivec[0] = 42;
    */
    // this program isnot legal because ivec has no elements to iterate though
    
    // fix 1
    vector<int> ivec1(10);
    ivec1[0] = 42;
    cout << ivec1[0] << endl;

    // fix 2
    vector<int> ivec2;
    ivec2.push_back(42);
    cout << ivec2[0] <<endl;
    // both solution will work and give 42 as the first element in the vector!
    return 0;
}