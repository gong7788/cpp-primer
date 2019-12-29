// Rewrite 3.6 using for and while

#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    string s("hello world!!!");
    // for loop
    for (char &c : s){
        if (isalpha(c)){
            c = 'X';
        }
    }
    cout << s << endl;

    string s1("hello world!!!");
    decltype(s1.size()) n = 0;
    while (n < s1.size()){
        (isalpha(s1[n])  ? s1[n++] = 'X' : s1[n++] );
    }

    cout << s1 << endl;

    return 0;
}
