//array addition//
#include <iostream>
using namespace std;

int main() {
    const int size= 5;
    int arr1[size], arr2[size], sum[size];
    cout << "enter 5 elements for the first array:\n";
    for (int i=0;i<size;i++) {
        cin >> arr1[i];
    }
    cout << "enter 5 elements for the second array:\n";
    for (int i=0;i<size;i++) {
        cin >> arr2[i];
    }
    for (int i=0;i<size;i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    cout << "\nSum of the two arrays:\n";
    for (int i=0;i<size;i++) {
        cout << sum[i] << " ";
    }
    cout << endl;
    return 0;
}