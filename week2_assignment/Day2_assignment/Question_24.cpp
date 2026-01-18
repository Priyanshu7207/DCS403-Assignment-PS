#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string a, b;
    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b)
        cout << "Strings are anagrams.";
    else
        cout << "Strings are not anagrams.";

    return 0;
}
