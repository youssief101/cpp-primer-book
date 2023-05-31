#include <iostream>
#include <vector>

using namespace std;

int main() {
    /*
        adding (subtracting) an integral value n to (form) an iterator yields an iterator that many elements forward (backward) within
        the container. The resulting iterator must denote elements in , or one past the end of, the same container
    */
    vector<int> ivec{1, 2, 3, 4, 5, 6};
    // iter + n
    auto iter = ivec.begin();
    iter = iter + 3;
    cout << *iter << endl; // 4

    // iter - n
    iter = iter - 3;
    cout << *iter << endl; // 1

    // iter += n
    iter += 2;
    cout << *iter << endl;  // 3

    // works the same for the compund assignement with iter -= n 
    return 0;
}