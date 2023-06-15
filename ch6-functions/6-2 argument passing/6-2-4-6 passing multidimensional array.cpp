// matrix points to the first element in an array whose elements are arrays of ten its
#include <cstddef>

#include <iostream>
using std::cout; using std::endl;

void print(int (*matrix)[10], int rowSize) {
    for (size_t i{0}; i < rowSize; ++i) {
        cout << matrix[0][i] << endl;
    }
}

int main() {
    int arr[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 3, 4, 5, 6, 7, 8, 0, 10}
    };
    // print the first row in the array
    print (arr, 10);
    return 0;
}