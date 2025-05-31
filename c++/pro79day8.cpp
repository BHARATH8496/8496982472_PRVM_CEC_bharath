/*Sphenic number can be checked by fact that every sphenic number will have exactly 8 divisor

So first We will try to find if the number is having exactly 8 divisors if not then simply answer is no.

If there are exactly 8 divisors then we will confirm whether the first 3 digits after 1 are prime or not.

Eg. 30 (sphenic number)

30-p*q*r(i.e p,q and rare three distinąt prime no and their product are 30)
*/
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
}