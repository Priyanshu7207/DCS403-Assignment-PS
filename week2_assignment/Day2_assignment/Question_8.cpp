#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double degree;
    cout << "Enter angle in degrees: ";
    cin >> degree;

    double radian = degree * acos(-1) / 180;

    cout << "sin(" << degree << "°) = " << sin(radian) << endl;
    cout << "cos(" << degree << "°) = " << cos(radian) << endl;
    cout << "tan(" << degree << "°) = " << tan(radian) << endl;

    return 0;
}
