/*
    Rewrite the code to eliminate goto!
    Note: the loop is infinite!
*/
#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

int get_size(vector<int> ivec) {
    return ivec.size();
}

int main() {
    /*
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // backward jump over an initialized variable definition is okay
    begin:
    int sz = get_size(ivec);
    cout << sz << endl;
    if (sz >= 0) {
        ++sz;
        cout << sz << endl;
        goto begin;
    }
    */
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int size{0};

    while (size = get_size(ivec)) {
        cout << size << endl;
        ++size;
        cout << size << endl;
    }
    return 0;
}