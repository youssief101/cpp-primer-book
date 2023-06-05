#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr; // pointer to the first element of the array

    // increment the pointer to point to the location just immediately past the end of the array
    ptr += 6;
    std::cout << ptr << std::endl;
    int* ptr2 = arr;
    ptr2 += 4;
    std::cout << ptr2 << std::endl;
    return 0;
}