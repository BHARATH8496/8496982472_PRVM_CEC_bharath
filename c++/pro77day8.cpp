/*Find the given number is emirp number or not

A number is called an emirp number if we get another prime number on reversing the number itself.

In other words, an emirp number is a number that is prime forwards or backward.
x
It is also known as twisted prime numbers.

Sample input: 1399

Sample output: Yes, the given number is an emirp number. 1

Sample input: 14 Sample output: No, the given number is not an emirp number.*/
#include <iostream>
using namespace std;
int main() 
{
    int n, i, rev = 0, temp, Prime1 = 1, Prime2 = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n<2) 
    {
        Prime1=0;
    } else 
    {
        for(i=2;i*i<=n;i++) 
        {
            if(n%i==0) 
            {
                Prime1=0;
                break;
            }
        }
    }
    temp=n;
    while(temp>0) 
    {
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    if(rev<2) 
    {
        Prime2=0;
    } else 
    {
        for(i=2;i*i<=rev;i++) {
            if(rev%i==0) {
                Prime2=0;
                break;
            }
        }
    }
    if (Prime1==1&&Prime2==1&&n!=rev) {
        cout << n << " is an emirp number.\n";
    } else {
        cout << n << " is not an emirp number.\n";
    }

    return 0;
}