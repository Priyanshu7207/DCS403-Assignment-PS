#include <iostream>
using namespace std;

void display(const string &msg) {
    cout << msg;
}

int main() {
    string text;

    cout << "Enter a message: ";
    getline(cin, text);

    display(text);
    return 0;
}
