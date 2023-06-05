using namespace std;
#include <vector>

int main() {
    vector<int> v1(10); // initialize the size of the vector v1 to 10
    vector<int> v2{10}; // initialize the value of the first element in the vector v2 to 10
    vector<int> v3(10, 1);  // create 10 elements in the vector v3 initialized to 1
    vector<int> v4{10, 1};  // create 2 elements in the vector v4 initalized to 10, and 1
    return 0;
}