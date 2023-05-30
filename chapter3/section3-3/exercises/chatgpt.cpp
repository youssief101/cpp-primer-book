#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec;
    int user_input;

    // Read integers into the vector
    while (std::cin >> user_input) {
        ivec.push_back(user_input);
    }

    // Print the vector
    for (auto i : ivec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Calculate and print the sums of corresponding elements
    int size = ivec.size();
    for (int i = 0; i < size / 2; i++) {
        std::cout << ivec[i] << " + " << ivec[size - 1 - i] << " = "
                << ivec[i] + ivec[size - 1 - i] << std::endl;
    }

    // If the vector has an odd number of elements, print the middle element
    if (size % 2 != 0) {
        std::cout << ivec[size / 2] << " (middle element)" << std::endl;
    }

    return 0;
}
