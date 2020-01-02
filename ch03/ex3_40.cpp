#include <iostream>
#include <cstring>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

const char s1[] = "A string";
const char s2[] = "a string";

int main() {
    size_t n = strlen(s1) + strlen(" ") + strlen(s2) + 1;
    char s3[n];

    strcpy(s3, s1);
    strcat(s3, " ");
    strcat(s3, s2);
    cout << s3 << endl;
    return 0;
}
