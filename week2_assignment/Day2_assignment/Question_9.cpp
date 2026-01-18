#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Maximum = " << fmax(a, b) << endl;
    cout << "Minimum = " << fmin(a, b) << endl;

    return 0;
}
