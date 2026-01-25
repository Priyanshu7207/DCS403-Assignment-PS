#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter a number to print its multiplication table (1-10): ";
    cin >> number;
    
    if (number < 1 || number > 10) {
        cout << "Please enter a number between 1 and 10." << endl;
        return 0;
    }
    
    cout << "Multiplication table of " << number << ":" << endl;
    
    
    for (int i = 1; i <= 10; i++) {
        int result = number * i;
        cout << number << " x " << i << " = " << result << endl;
    }
    
    return 0;
}