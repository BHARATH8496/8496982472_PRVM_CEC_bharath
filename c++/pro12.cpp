//aabb piramit//
#include <iostream>
using namespace std;
int main() {
    int n;
    char ch = 'A';
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
          cout << ch << " ";
        }
        cout << endl;
        ch++; 
    }


 return 0;
}