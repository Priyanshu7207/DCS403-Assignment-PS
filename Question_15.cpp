#include <iostream>
using namespace std;

void printMatrix(int arr[][3]) {
    cout << "Matrix is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a[3][3];

    cout << "Enter 9 elements for 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    printMatrix(a);

    return 0;
}