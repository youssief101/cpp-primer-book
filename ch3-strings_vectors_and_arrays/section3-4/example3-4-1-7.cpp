using namespace std;
#include <iostream>
#include <string>
#include <vector>

int main() {
    vector<string> ivec;
    auto it = ivec.begin(); // if the vector is emtpy return error/ undefined behavior/ show nothing!
    if ((*it).empty()) {    // you can also use it.begin() == it.end()
        cout << "the vector is empty" << endl;
    } else {
        while (it != ivec.end()) {
            cout << *it << endl;
            it++;
        }
    }
    // error
    *it.empty();    // attmept to fetch the member named empty from it, but it is an iterator and has no member named empty
    return 0;
}