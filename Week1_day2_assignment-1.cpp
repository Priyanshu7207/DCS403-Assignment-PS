#include <iostream>
using namespace std;

int main() {
    int baseSalary;
    const double bonusPercent = 10.0;   

    cout << "Enter base salary: ";
    cin >> baseSalary;

    double bonusAmount = baseSalary * (bonusPercent / 100.0);
    double totalSalary = baseSalary + bonusAmount;

    cout << "Bonus Amount: " << bonusAmount << endl;
    cout << "Total Salary: " << totalSalary << endl;

    return 0;
}
