#include <iostream>
using std::cout; using std::endl;

void print(const char *cp) {
    if (cp)                // if cp is not a null pointer
        while (*cp)        // so long as the character if points to isn't a null character
            cout << *cp++; // print the character and advance the pointer
}

int main() {
    char str[] = {'H', 'e', 'l', 'l', 'o', '\n'};
    print(str);
    return 0;
}