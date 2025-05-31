/*An autobiographical number is a number that describes itself in terms of the counts of its digits.

Specifically, an n-digit autobiographical number has a digit count such that the digit at position k (starting from the left)

is equal to the count of the digit k in the number.

For example, let's take the number 21200. It has two os, one 1, two 2s, and zero 3s or higher digits.

So, it is a 5-digit autobiographical number.*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isAutobiographical(const string& numStr) {
    int n = numStr.length();
    if (n == 0) return false;

    for (int i = 0; i < n; ++i) {
        int digitCount = 0;
        for (char c : numStr) {
            if (c - '0' == i) {
                digitCount++;
            }
        }
        if (digitCount != (numStr[i] - '0')) {
            return false;
        }
    }
    return true;
}
int main() {
    string number;
    cout << "enter a atobiographical number:";
    cin >>number;
    if (isAutobiographical(number)) {
        cout << number << " is an autobiographical number." << endl;
    } else {
        cout << number << " is not an autobiographical number." << endl;
    }
}