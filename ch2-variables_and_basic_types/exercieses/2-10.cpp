#include <iostream>

std::string global_str; // empty string 
int global_int; // zero

int main() {
    int local_int; // undefined, inintialized builtin type
    std::string local_str; // undefined, inintialized builtin type
    std::cout << global_str << "\n" << global_int << std::endl;
    std::cout << local_int << "\n" << local_str << std::endl;
}