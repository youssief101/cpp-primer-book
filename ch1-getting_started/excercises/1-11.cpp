#include <iostream>

int main() {
    int start, end;
    std::cout << "Enter the start number: ";
    std::cin >> start;
    std::cout << "Enter the end number: ";
    std::cin >> end;

    while (start <= end) {
        std::cout << start << std::endl;
        ++start;
    }
    return 0;
}