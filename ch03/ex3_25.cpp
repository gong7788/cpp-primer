// Redo p93

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
    vector<unsigned> scores(11,0);
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100)
            ++*(scores.begin() + grade/10);
    }

    for (auto &n : scores)
        cout << n << " ";
    cout << endl;
    return 0;
}
