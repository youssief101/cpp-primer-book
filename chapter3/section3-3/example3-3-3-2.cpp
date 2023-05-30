#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main() {
    // compare two equal string vectors
    vector<string> svec {"youssef", "ziad", "ahmed"};
    vector<string> svec2 {"youssef", "ziad", "ahmed"};
    if (svec == svec2) {
        cout << "svec is equal to svec2" << endl;
    } else {
        cout << "they are not equal!" << endl;
    }

    // compare non equal strings vector but have simillar elements
    vector<string> svec3 {"ahmed", "khaled", "reda"};
    vector<string> svec4 {"ahmed", "khaled", "reda", "hossam"};
    if (svec3 < svec4) {
        cout << "svec3 is smaller than svec4" << endl;
    } else if (svec4 < svec3) {
        cout << "svec4 is smaller than svec3" << endl;
    } else {
        cout << "svec 3 is not equal to svec4" << endl;
    }

    // compare non equal vector in values
    vector<string> svec5 {"ahmed", "reda", "hossam"};
    vector<string> svec6 {"ramy", "mohsen", "alaa"};
    if (svec5 < svec6) {
        cout << "svec5 is smaller than svec6" << endl;
    } else if (svec5 < svec6) {
        cout << "svec6 is smaller than svec5" << endl;
    } else {
        cout << "svec5 is not equal to svec6" << endl;
    }

    return 0;
}