#include <iostream>

int main() {
    int sum{50}, n1{51};
    while (n1 <= 100) {
        sum += n1;
        ++n1;
    }
    std::cout << sum;
    return 0;
}
