#include <iostream>

int main() {
    const int bufSize = 512;    // input buffer size
    bufSize = 512;  // error: any attempt to write to const object`
    return 0;
}