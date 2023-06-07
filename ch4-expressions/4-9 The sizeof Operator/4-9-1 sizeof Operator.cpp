#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main() {
    string myString = "Hello, world!";
    vector<int> myVector = {1, 2, 3, 4, 5};

    cout << "Size of myString: " << sizeof(myString) << endl;
    cout << "Size of myVector: " << sizeof(myVector) << endl;

    cout << "Length of myString: " << myString.length() << endl;
    cout << "Number of elements in myVector: " << myVector.size() << endl;

    cout << "Size of each character in myString: " << sizeof(char) << endl;
    cout << "Size of each element in myVector: " << sizeof(int) << endl;

    size_t stringSize = myString.length() * sizeof(char);
    size_t vectorSize = myVector.size() * sizeof(int);

    cout << "Size of elements in myString: " << stringSize << endl;
    cout << "Size of elements in myVector: " << vectorSize << endl;

    return 0;
}
