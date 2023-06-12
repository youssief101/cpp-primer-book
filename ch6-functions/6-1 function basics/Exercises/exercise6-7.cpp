#include <iostream>
using std::cout; using std::endl;

int callCounter() {
    static size_t callCnt{0};
    // at first it return a copy of callCnt before incrementing
    return callCnt++;
}

int main() {
    for (int i{0}; i != 11; ++i) {
        cout << callCounter() << endl;
    }
    return 0;
}