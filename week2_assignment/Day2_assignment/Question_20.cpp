#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int index = 0;
    for (char &ch : str) {
        if (isalpha(ch)) {
            if (index % 2 == 0)
                ch = tolower(ch);
            else
                ch = toupper(ch);
            index++;
        }
    }

    cout << str;
    return 0;
}
