// Read text and change first paragraph to upper case and output it.

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
    vector<string> text;
    for (string line; getline(cin, line); text.push_back(line));

    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it){
        for (auto &c : *it){ c = toupper(c);}
        cout << *it << endl;
    }
    
    return 0;
}
