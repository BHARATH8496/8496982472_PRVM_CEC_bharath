//largest//
#include <iostream>
using namespace std;
int main() 
{
    int a,b,c,large;
    cout << "enter three numbers: ";
    cin >> a >> b>> c;
    large=a;
    if(b>large)
    large=b;
    if(c>large)
    large=c;
    cout << "largest=" << large <<endl; 
}