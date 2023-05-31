#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    const vector<int> cv;
    auto it1 = v.begin();   // it has type vector<int>::iterator
    auto it2 = cv.begin();  // it has type vector<int>::const_iterator
    // c++11 new standards
    /*
        it's usually best to use a const type (such as const_iterator) when we need to read but do not need to write to an object.
    */
    auto it3 = v.();  // it3 has type vector<int>::const_iterator
    return 0;
}