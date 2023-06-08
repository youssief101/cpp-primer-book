#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <vector>
using std::vector;

int main() {
    vector<int> v = {10, 20, 30, 40, -40, 50};
    // remember the size of v and stop when we get to the original last element
    // a loop to duplicate the elements of a vector
    for (decltype(v.size()) i = 0, sz = v.size(); i != sz; ++i) {
        v.push_back(v[i]);
    }
    for (auto i : v) {
        cout << i << endl;
    }

    auto beg = v.begin();
    for ( /* null */ ; beg != v.end() && *beg >= 0; ++beg) {
        ; // no work to do
    }
    if (beg == v.end())
        // we know that all elements in v are greater than or equal to zero

    /*
        ommiting condition is equivalent to writing true as a condition. Because the condition always
        evaluate as true, the for body must contain a statement that exits the loop. otherwise the loop
        will execute infinitely
    */
    for (int i{0}; /* no condition */ ; ++i) {
        // process i; code inside the loop must stop the iteration!
    }

    /*
        we can omit expression from the for header. In such loops, either the 
        condition or the body must do something to advance the iteration.
    */
    for (int i; cin >> i; /* no expression */ ) {
        v.push_back(i);
    }
    return 0;
}