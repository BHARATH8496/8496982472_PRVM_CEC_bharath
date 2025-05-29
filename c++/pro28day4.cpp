//summation//
#include <iostream>
using namespace std;
int main() {
    int n, number, sum = 0;

    cout << "Enter the sum number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Total sum = " << sum << endl;

return 0;
}