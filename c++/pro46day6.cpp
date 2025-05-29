//total and avrege of an array//
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of elements :";
    cin >>n;
    int arr[n];
    int total=0;
    cout << "enter array element:\n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        total+=arr[i];
    }
    double average=static_cast<double>(total)/n;
    cout <<"Total="<<total<<endl;
    cout <<"average="<<average<<endl;
 return 0;
}