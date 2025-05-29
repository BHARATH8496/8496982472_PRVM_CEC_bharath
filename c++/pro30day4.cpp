//swaping two variables//
#include<iostream>
using namespace std;
int main() 
{
    float a, b, t;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
     t= a;
    a = b;
    b = t;
    cout<< "After swapping a=" <<a <<"\n";
    cout<< "After swapping b=" <<b <<"\n";
return 0;
}