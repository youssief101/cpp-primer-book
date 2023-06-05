#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* p1 = arr;             // Points to the first element of arr
    int* p2 = arr + 5;         // Points just past the end of arr
    int* p3 = arr + 6;         // Points to a memory location beyond arr

    if (p1 == p2) {
        std::cout << "p1 and p2 compare equal!" << std::endl;
    } else {
        std::cout << "p1 and p2 do not compare equal!" << std::endl;
    }

    if (p1 == p3) {
        std::cout << "p1 and p3 compare equal!" << std::endl;
    } else {
        std::cout << "p1 and p3 do not compare equal!" << std::endl;
    }

    return 0;
}
