// const int ia[] is equivalent to const int *ia
// size is passed explicitly and used to control access to elements of ia
#include <cstddef>

#include <array>
using std::begin; using std::end;

#include <iostream>
using std::cout; using std::endl;

void print(const int ia[], size_t size) {
    for (size_t i{0}; i != size; ++i) {
        cout << ia[i] << endl;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    print(arr, end(arr) - begin(arr));
    return 0;
}