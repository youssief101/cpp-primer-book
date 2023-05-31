#include <iostream>

int main() {
    // assuimg p is a pointer to an int
    int ival{0};
    int *p = &ival;
    // ... // any non zero pointer is a true bool value
    if (p) {
        std::cout << "everything is fine" << std::endl;
    } else {
        std::cout << "there is some error" << std::endl;
    }
    // ... // this will evaluate to an error because this is an integer not a boolian
    if (*p) {
        std::cout << "everything is fine" << std::endl;
    } else {
        std::cout << "there is some error" << std::endl;
    }
    return 0;
}