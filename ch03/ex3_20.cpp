// Read a group of number, store in a vector and output sum of adjecent numbers. 

#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
    vector<int> ivec;
    int n;

    while (cin >> n) {
        if (n != -1)
            ivec.push_back(n);
        else break;
    }

    for (decltype(ivec.size()) i = 0; i < ivec.size() - 1; ++i)
        cout << ivec[i] + ivec[i+1] << endl;
    return 0;
}
