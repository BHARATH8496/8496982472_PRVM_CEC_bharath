/*Sphenic number can be checked by fact that every sphenic number will have exactly 8 divisor

So first We will try to find if the number is having exactly 8 divisors if not then simply answer is no.

If there are exactly 8 divisors then we will confirm whether the first 3 digits after 1 are prime or not.

Eg. 30 (sphenic number)

30-p*q*r(i.e p,q and rare three distinąt prime no and their product are 30)

the set of divisor is (1,2,3,5,6,10,15,30).


#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Divisors of " << n << " are: ";
    for (int i = 1; i <= n; ++i) 
    {
        if (n % i == 0) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;
}
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                count++; 
            else
                count += 2;
        }
    }
    return count;
}
vector<int> getDistinctPrimeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i <= n && n > 1; i++) {
        if (n % i == 0 && isPrime(i)) {
            factors.push_back(i);
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    return factors;
}
bool isSphenic(int n) {
    if (countDivisors(n) != 8) {
        return false;
    }

    vector<int> primeFactors = getDistinctPrimeFactors(n);
    if (primeFactors.size() == 3) {
        cout << "Prime factors: ";
        for (int p : primeFactors)
            cout << p << " ";
        cout << endl;
        return true;
    }

    return false;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isSphenic(number)) {
        cout << number << " is a Sphenic number.\n";
    } else {
        cout << number << " is NOT a Sphenic number.\n";
    }

    return 0;
}