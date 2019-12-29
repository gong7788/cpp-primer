// Read two string, compare whether they are same.
// If not, output larger one. 

#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
        cout << s1 << endl;
    else
        cout << "The longer one is '" << ((s1 > s2) ? s1 : s2) << "' " << endl;
    return 0;
}
