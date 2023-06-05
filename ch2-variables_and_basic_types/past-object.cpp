#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* parr1 = arr;          // points to the first element in the array
    int* parr2 = arr + 4;      // points to the last element in the array

    if (parr1 + 5 == parr2 + 1) {
        std::cout << "Pointers are equal!" << std::endl;
    }
    else {
        std::cout << "Pointers are not equal!" << std::endl;
    }
    return 0;
}
