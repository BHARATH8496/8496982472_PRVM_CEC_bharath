//Apirfect (excluding the number itself).
//A perfect number is a positive integer that is equal to the sum of its proper divisors For example,
//6 is a perfect number because the sum of itsi proper divisors (1, 2, and 3) is equal to 6.
#include <iostream>
using namespace std;
bool isPerfect(int num) {
    if (num <= 1) {
        return false;
    }
    int sum = 1;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}
int main() {
    int number;
    cout << "enter a number:";
    cin >> number;
    if (isPerfect(number)) {
        cout << number << " is a perfect number." << std::endl;
    } else {
        cout << number << " is not a perfect number." << std::endl;
    }
}