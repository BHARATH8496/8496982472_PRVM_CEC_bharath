// sort the given element odd//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {5, 2, 9, 8, 1, 6, 3};

    // Extract odd elements
    vector<int> odds;
    for (int num : arr) {
        if (num % 2 != 0)
            odds.push_back(num);
    }

    // Sort odd elements
    sort(odds.begin(), odds.end());

    // Replace original odd numbers with sorted ones
    int oddIndex = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 != 0) {
            arr[i] = odds[oddIndex++];
        }
    }

    // Display result
    cout << "Array after sorting odd elements: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}