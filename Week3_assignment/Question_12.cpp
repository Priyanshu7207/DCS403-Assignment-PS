#include <iostream>
using namespace std;

float area(float r) {
    return 3.14 * r * r;
}

int area(int l, int b) {
    return l * b;
}

int main() {
    float r;
    int l, b;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    cout << "Area of circle = " << area(r) << endl;
    cout << "Area of rectangle = " << area(l, b);

    return 0;
}
