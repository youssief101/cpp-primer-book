#include <iostream>

int main() {
    int total{10};
    while (total >= 0) {
        std::cout << total << std::endl;
        --total;
    }
    return 0;
}