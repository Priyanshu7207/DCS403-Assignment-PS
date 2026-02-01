#include <iostream>
using namespace std;

int main() {
    int a[3][3];

    cout << "Enter matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++)
            rowSum += a[i][j];
        cout << "Row " << i + 1 << " sum = " << rowSum << endl;
    }

    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++)
            colSum += a[i][j];
        cout << "Column " << j + 1 << " sum = " << colSum << endl;
    }
    return 0;
}
