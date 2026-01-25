#include <iostream>
using namespace std;

int power(int base, int exponent = 2) {
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exp;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent (enter 0 to use default): ";
    cin >> exp;

    if (exp == 0)
        cout << "Result = " << power(base);
    else
        cout << "Result = " << power(base, exp);

    return 0;
}
