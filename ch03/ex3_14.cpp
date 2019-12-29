// Read a group of numbers and store in a vector

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
    int n;
    vector<int> v;
    while (cin >> n)
        v.push_back(n);

    return 0;
}
