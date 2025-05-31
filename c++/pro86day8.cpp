/*Question 1:

Find the missing number in an array of integers.

Given an array of integers from 1 to N, with one number missing, write a function to find the missing number.*/
#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;
int findMissingNumber(std::vector<int> arr, int N) {
    int expectedSum = (N * (N + 1)) / 2;
    int actualSum = std::accumulate(arr.begin(), arr.end(), 0);
    return expectedSum - actualSum;
}

int main() {
    std::vector<int> arr = {1, 2, 4, 5, 6};
    int N = 6;

    int missingNumber = findMissingNumber(arr, N);
    std::cout << "The missing number is: " << missingNumber << std::endl;
    return 0;
}