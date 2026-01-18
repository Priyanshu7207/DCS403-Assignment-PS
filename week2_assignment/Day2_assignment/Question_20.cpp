#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int idx = 0;
    for (char &ch : str) {
        if (isalpha(ch)) {
            ch = (idx % 2 == 0) ? tolower(ch) : toupper(ch);
            idx++;
        }
    }

    cout << str;
    return 0;
}
