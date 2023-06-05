#include <iostream>
using namespace std;
#include <string>

int main() {
    string str{"Hello"};
    string phrase{"Hello, world"};
    string slang{"Hiya"};

    if (str < phrase) {
        cout << "str is smaller than phrase" << endl;
    } else {
        cout << "str is greater than phrase" << endl;
    }

    if (str < slang) {
        cout << "str comes before slang" << endl;
    } else {
        cout << "str comes after slang";
    }

    if (phrase < slang) {
        cout << "phrase comes before slang" << endl;
    } else {
        cout << "phrase comes after slang" << endl;
    }
    return 0;
}