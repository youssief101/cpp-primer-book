#include <iostream>

int main() {
    // (a)
    // const int buf; // error the const buf not initialized

    // (b)
    int cnt = 0; // legal a normal defination for an integer

    // (c)
    const int sz = cnt;
    std::cout << sz << std::endl;

    cnt = 11;
    std::cout << sz << std::endl;
    std::cout << cnt << std::endl;

    // (d)
    ++cnt; // will print 12
    std::cout << cnt << std::endl;
    // ++sz; // an error you can't modify a const var
    return 0;
}