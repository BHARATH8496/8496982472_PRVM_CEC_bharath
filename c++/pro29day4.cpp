//squar//
#include <iostream>
using namespace std;
int main() {
    int n, number, sum = 0;

    cout << "Enter the sum  of squars number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        sum += number * number;
    }
    cout << "the sum of squars = " << sum << endl;

return 0;
}