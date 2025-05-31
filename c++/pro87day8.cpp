/*Count the frequency of each character in a string.

Write a function to count the frequency of each character in a given string.*/
#include <iostream>
#include <string>
#include <map>

void countCharacterFrequencies(const std::string& str) {
    std::map<char, int> charCounts;
    for (char c : str) {
        charCounts[c]++;
    }
    for (const auto& pair : charCounts) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

int main() {
    std::string inputString = "hello world";
    countCharacterFrequencies(inputString);
    return 0;
}