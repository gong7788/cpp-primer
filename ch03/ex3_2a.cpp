#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    for(string line; getline(cin,line); cout << line << endl);
    return 0;
}
