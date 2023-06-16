#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "number of args must be 2" << endl;
        return -1;
    }

    string arg1 = argv[1];
    string arg2 = argv[2];
    string result = arg1 + arg2;

    cout << "Concatenated string: " << result << endl;
    return 0;
}
