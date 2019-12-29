#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    string result, input;
    while (cin >> input) {
        if (input == ".")
            break;
        else
            result += input;
    }
    cout << result << endl;
    return 0;
}
