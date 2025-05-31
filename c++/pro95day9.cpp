//revarsal palindrome//
#include <iostream>
#include <cstring>  // for strlen
using namespace std;

int main() {
    char str[100];
    int length, i;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}