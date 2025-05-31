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
    int n,i,ctr=0;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            ctr++;
                break;
        }
       
        cout<<ctr<<endl;
}
    if(ctr>0)
    {
        cout<<"Not a Prime\n";
        
    }
    else
    {
        cout<<"it is a prime\n";
    }

    return 0;
}