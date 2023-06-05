#include <iostream>
using namespace std;
#include <vector>
#include <string>

int main() {
    // v.empty()
    vector<string> svec;
    if (svec.empty()) {
        cout << "the vector is empty" << endl;
    }

    // v.size()
    vector<int> ivec(10, 20);
    cout << "the size of the vector is " << ivec.size() << endl;

    // v.push_back(t)
    vector<int> ivec2;
    for (int i{0}; i != 100; i++) {
        ivec2.push_back(i);
        cout << "adding " << i << endl;
    }

    // v[n]
    vector<string> svec2{"ahmed", "ali", "rami"};
    cout << svec2[2] << endl;

    // v1 = v2
    vector<int> ivec3 {1, 2, 3, 4};
    vector<int> ivec4 {5, 6, 7, 8};
    ivec4 = ivec3;
    for (auto i : ivec4) {
        cout << i << endl;
    }

    // v1 == v2
    vector<string> svec3 {"youssef", "ziad", "ahmed"};
    vector<string> svec4 {"youssef", "ziad", "ahmed"};
    if (svec3 == svec4) {
        cout << "svec3 is equal to svec4" << endl;
    } else {
        cout << "they are not equal!" << endl;
    }

    // v1 != v2
    // the opposite!

    // <, <=, >, >=

    // compare non equal strings vector but have simillar elements
    vector<string> svec5 {"ahmed", "khaled", "reda"};
    vector<string> svec6 {"ahmed", "khaled", "reda", "hossam"};
    if (svec5 < svec6) {
        cout << "svec5 is smaller than svec6" << endl;
    } else if (svec6 < svec5) {
        cout << "svec6 is smaller than svec5" << endl;
    } else {
        cout << "svec5 is not equal to svec6" << endl;
    }

    // compare non equal vector in values
    vector<string> svec7 {"ahmed", "reda", "hossam"};
    vector<string> svec8 {"ramy", "mohsen", "alaa"};
    if (svec7 < svec8) {
        cout << "svec7 is smaller than svec8" << endl;
    } else if (svec7 < svec8) {
        cout << "svec8 is smaller than svec7" << endl;
    } else {
        cout << "svec7 is not equal to svec8" << endl;
    }
    return 0;
}