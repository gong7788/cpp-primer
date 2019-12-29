// Read two string, compare their length, output longer one

#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() == s2.size())
        cout << s1 << endl;
    else
        cout << "The longer one is '" << ((s1.size() > s2.size()) ? s1 : s2) << "' " << endl;
    return 0;
}
