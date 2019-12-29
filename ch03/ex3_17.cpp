// Read from cin, and to upper case and store in a vector then output. 

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
    vector<string> svec;
    string word;
    while (cin >> word) {
        if (word != "."){
            for(auto &c : word)
                c = toupper(c);
        }
        else
            break;
        svec.push_back(word);
    }

    for (auto &w : svec)
        cout << w << endl;
    return 0;
}
