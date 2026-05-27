#include <iostream>
using namespace std;

int main() {
    string name;
    float hoursWorked, ratePerHour;
    float basicPay, tax, netPay;

    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    cout << "Enter rate per hour: ";
    cin >> ratePerHour;

    basicPay = hoursWorked * ratePerHour;

    if (basicPay > 50000) {
        tax = 0.20 * basicPay;
    }
    else if (basicPay >= 20000 && basicPay <= 50000) {
        tax = 0.10 * basicPay;
    }
    else {
        tax = 0;
    }

    netPay = basicPay - tax;

    cout << "\nEmployee Name: " << name << endl;
    cout << "Basic Pay: " << basicPay << endl;
    cout << "Tax: " << tax << endl;
    cout << "Net Pay: " << netPay << endl;

    return 0;
}