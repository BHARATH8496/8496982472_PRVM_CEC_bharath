// Program to check whether the given alphabet is a vowel or not//
#include <iostream>
using namespace std;
int main()
{
    char c;
    int uppercase,lowercase;
   cout << "please enter any alphabet\n";
    cin>>c;
    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lowercase || uppercase) {
    
        cout<<"it is a vowel"<<endl;
    }
    else{
        cout<<"it is not a vowel"<<endl;
    }
    return 0;
}