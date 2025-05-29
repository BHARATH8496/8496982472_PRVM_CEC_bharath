#include <iostream>
#include <cmath>  // For the pow() function

using namespace std;

int main() {
    double principal, rate, time, compoundInterest, amount;
    int n; 
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;
    cout << "Enter number of times interest is compounded per year: ";
    cin >> n;
    amount = principal * pow((1 + rate / (100 * n)), n * time);
    compoundInterest = amount - principal;
    cout << "Compound Interest = " << compoundInterest << endl;
    cout << "Total Amount = " << amount << endl;

return 0;
}