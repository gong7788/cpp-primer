#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
    vector<int> v;
    for(int n; cin >> n; v.push_back(n));

    if (v.size() < 2){
        cout << "Please enter at least two numbers.";
        return -1;
    }

    // output sum of adjacent numbers
    for (auto it = v.cbegin(); it + 1 != v.cend(); ++it)
        cout << *it + *(it + 1) << " ";
    cout << endl;

    // output sun of first and last, second and second last...
    for (auto left = v.cbegin(), right = v.cend() - 1; left <= right; ++left, --right)
        cout << *left + *right << " ";
    cout << endl;

    return 0;
}
