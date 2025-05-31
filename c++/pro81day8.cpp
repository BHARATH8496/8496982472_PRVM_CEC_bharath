/*Sphenic number can be checked by fact that every sphenic number will have exactly 8 divisor

So first We will try to find if the number is having exactly 8 divisors if not then simply answer is no.

If there are exactly 8 divisors then we will confirm whether the first 3 digits after 1 are prime or not.

Eg. 30 (sphenic number)

30-p*q*r(i.e p,q and rare three distinąt prime no and their product are 30)

the set of divisor is (1,2,3,5,6,10,15,30)*/

//number of divisors//
#include <iostream>
using namespace std;
int main() {
    int n, count = 0,a[10],i;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
            a[i] = i; 
        }
    }

    cout << "Number of divisors of " << n << " is: " << count << endl;
    if (count==8)
    {
        cout << "The number is a sphenic number." << endl;
    }
    else
    {
        cout << "The number is not a sphenic number." << endl;
    }

    return 0;
};