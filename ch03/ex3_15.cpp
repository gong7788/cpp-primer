// Read a group of string and store in a vector

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
    string word;
    vector<string> v;
    while (cin >> word)
        v.push_back(word);

    return 0;
}
