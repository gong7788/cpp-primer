// Exercise 3.2-a 
// Read the standard input a line at a time.

#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    for(string line; getline(cin,line); cout << line << endl);
    return 0;
}
