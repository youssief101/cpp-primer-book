/*
    Read a set of integers into a vector. Print the sum of each pair of
    adjacent elements. Change your program so that it prints the sum of the first 
    and last elements, followed by the sum of the second and second-to-last, and so on.
*/

using namespace std;
#include <iostream>
#include <vector>

int main() {
    vector<int> ivec;
    int user_input;

    // Read integers into the vector
    while (cin >> user_input) {
        ivec.push_back(user_input);
    }

    // Calculate and print the sums of corresponding elements
    for (int i = 0; i < ivec.size() / 2; i++) {
        std::cout << ivec[i] << " + " << ivec[ivec.size() - 1 - i] << " = "
                << ivec[i] + ivec[ivec.size() - 1 - i] << std::endl;
    }

    // If the vector has an odd number of elements, print the middle element
    if (size % 2 != 0) {
        std::cout << ivec[size / 2] << " (middle element)" << std::endl;
    }

    return 0;
}