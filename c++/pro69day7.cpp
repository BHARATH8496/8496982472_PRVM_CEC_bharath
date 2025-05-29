//age limimt: 18 years and above//
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: "  << endl;
    cin >> age;
    try
{
        if (age < 18) {
            throw age;
        } else {
            cout << "You are eligible." << endl;
        }
    } catch (int a) {
        cout << "Age must be 18 or above . but your age is: " << a << endl;
    }
    return 0;
}
