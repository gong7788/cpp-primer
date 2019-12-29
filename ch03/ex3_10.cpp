// Read a string, and remove all punctuation 

#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    string s;
    getline(cin,s);
    for (char &c : s){
        if (!ispunct(c))
            cout << c;
    }

    return 0;
}
