/*A neon number is a number where the sum of digits of square of the number is equal to the number.

Input: 9

Output: Neon Number

Explanation: square is 99 81 and sum of the digits of the square is 9.

Input :12

Output: Not a Neon Number

Explanation: square is 12*12=144 and sum of the digits of the square is 9 (1 +4+4) which is not equal to 12.*/
#include <iostream>
#include <cmath>

using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isNeonNumber(int n) {
    int square = n * n;
    return sumOfDigits(square) == n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isNeonNumber(num)) {
        cout << "Neon Number" << endl;
    } else {
        cout << "Not a Neon Number" << endl;
    }

    return 0;
}
//