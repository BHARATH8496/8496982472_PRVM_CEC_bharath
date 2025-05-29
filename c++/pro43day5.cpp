//revars 1 order//
 
#include <iostream>
using namespace std;
int main()
{
    int n,dig;
    cout<<"please enter the number:";
    cin>>n;
    while(n>0)
    {
        dig=n%10;
        cout<<dig<<"\n";
        n=n/10;
    }
}