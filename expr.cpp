#include <iostream>

const int MAX_SIZE = 100; // maximum size of the array

int main() {
    int X[MAX_SIZE]; // array declaration
    int size = 0; // current size of the array

    int newValue;
    std::cout << "Enter the integer to be inserted: ";
    std::cin >> newValue;

    // Shift the existing elements to the right
    for (int i = size; i > 0; i--) {
        X[i] = X[i - 1];
    }

    // Insert the new value at the first position
    X[0] = newValue;

    size++; // increase the size of the array

    std::cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        std::cout << X[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
