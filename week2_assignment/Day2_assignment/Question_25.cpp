#include <iostream>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    cin >> str;

    for (char ch : str)
        if (!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
              ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
            result += ch;

    cout << result;
    return 0;
}
