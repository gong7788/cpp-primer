// Replace all letters with 'X'

#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    string s("hello world!!!");
    for (auto &c : s){
        if (isalpha(c)){
            c = 'X';
        }
    }
    cout << s << endl;
    return 0;
}
