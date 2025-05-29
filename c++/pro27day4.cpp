#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double principal, rate, time;
    int choice;

    cout << "Select Interest Calculation:\n";
    cout << "1. Simple Interest\n";
    cout << "2. Compound Interest\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    switch (choice) {
        case 1: {
            double simpleInterest = (principal * rate * time) / 100;
            cout << "Simple Interest = " << simpleInterest << endl;
            cout << "Total Amount = " << (principal + simpleInterest) << endl;
            break;
        }
        case 2: {
            int n;
            cout << "Enter number of times interest is compounded per year: ";
            cin >> n;
            double amount = principal * pow((1 + rate / (100 * n)), n * time);
            double compoundInterest = amount - principal;
            cout << "Compound Interest = " << compoundInterest << endl;
            cout << "Total Amount = " << amount << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }
return 0;
}