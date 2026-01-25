#include <iostream>
using namespace std;

// Global variable
int globalVar;

void demo() {
    static int staticVar = 1;   
    cout << "Static local variable = " << staticVar << endl;
    staticVar++;
}

int main() {
    int localVar;

    cout << "Enter value for global variable: ";
    cin >> globalVar;

    cout << "Enter value for local variable: ";
    cin >> localVar;

    cout << endl;
    cout << "Global variable = " << globalVar << endl;
    cout << "Local variable = " << localVar << endl;
    cout << endl;

    cout << "Calling demo() function multiple times:" << endl;
    demo();
    demo();
    demo();

    return 0;
}
