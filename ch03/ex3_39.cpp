//Compare two strings and do this in C style. 

#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;


int main() {
    string s1("A string.");
    string s2("a string.");

    s1 == s2 ? cout << "They are same." : cout << "They are different.";

    cout << "==============" << endl;
    //C style
    const char ca1[] = "A string.";
    const char ca2[] = "a string.";
    strcmp(ca1, ca2) ? cout << "They are same." : cout << "They are different.";

    return 0;
}
