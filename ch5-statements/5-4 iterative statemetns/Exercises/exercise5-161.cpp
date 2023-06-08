#include <iostream>
#include <vector>

bool isPrefix(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    size_t size = std::min(vec1.size(), vec2.size());  // Get the size of the smaller vector
    
    for (size_t i = 0; i < size; ++i) {
        if (vec1[i] != vec2[i]) {
            return false;  // Found a mismatch, vectors are not a prefix of each other
        }
    }
    
    return true;  // All elements matched, one vector is a prefix of the other
}

int main() {
    std::vector<int> vec1 = {0, 1, 1, 2};
    std::vector<int> vec2 = {0, 1, 1, 2, 3, 5, 8};
    
    bool isPrefixResult = isPrefix(vec1, vec2);
    
    if (isPrefixResult) {
        std::cout << "One vector is a prefix of the other." << std::endl;
    } else {
        std::cout << "Vectors are not a prefix of each other." << std::endl;
    }
    
    return 0;
}
