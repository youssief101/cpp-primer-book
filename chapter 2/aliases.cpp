#include <iostream>

int main() {
    typedef int* intPtr;
    int i{20};
    intPtr pi{&i};
    std::cout << pi << std::endl;

    using dPtr = double *;
    double k{3.14};
    dPtr kp{&k};
    std::cout << kp << std::endl;
    return 0;
}