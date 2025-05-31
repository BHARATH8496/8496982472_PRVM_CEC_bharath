/*Question 2:

Check if a string is a palindrome.

Write a function to check if a given string is a palindrome (reads the same forward and backward).*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(string str) {
    string reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end());
    return str == reversed_str;
}

int main() {
    string test_str = "madam";
    if (isPalindrome(test_str)) {
        cout << test_str << " is a palindrome." << endl;
    } else {
        cout << test_str << " is not a palindrome." << endl;
    }
    return 0;
}