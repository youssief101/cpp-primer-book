#include <iostream>
using namespace std;

int main() {
    int somevalue{1};
    int x{0}, y{0};
    somevalue ? 
    ++x, ++y 
    : --x, --y;
    cout << x << " " << y << endl;
    return 0;
}

