/*
    exercise 3-17: Read a sequence of words from cin and store the values a vector.
    After you’ve read all the words, process the vector and change each word to uppercase.
    Print the transformed elements, eight words to a line.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string user_input;
    vector<string> svec;
    // get input from the user, create the vector svec
    while (cin >> user_input)
    {
        svec.push_back(user_input);
    }
    // process the vector and change each word to uppercase.
    for (auto itersvec = svec.begin(); itersvec != svec.end(); itersvec++)
    {
        for (auto itersvec2 = (*itersvec).begin(); itersvec2 != (*itersvec).end(); itersvec2++)
        {
            *itersvec2 = toupper(*itersvec2);
            cout << *itersvec2;
        }
        cout << endl;
    }
    return 0;
}