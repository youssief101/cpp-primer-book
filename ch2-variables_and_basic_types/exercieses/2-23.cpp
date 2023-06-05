#include <iostream>

int main() {
    int p = 20;
    int *pi = &p;
    std::cout << "the variable p with value " << p << " is in the memroy location address " << pi << std::endl;
    return 0;
}