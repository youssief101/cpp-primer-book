#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

#include "exercises_libs.h"

int main() {
    string s{"Hi iam Ziad Mohamed Mokhtar"};
    unsigned int cnt = check_upper(s);
    cout << "number of uppercase letter is " << cnt << endl;
    to_lower(s);
    cout << s << endl;
    return 0;
}