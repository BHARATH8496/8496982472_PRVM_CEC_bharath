//star piramitar //
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {

        for (int j = 0; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 0; k <= (1 * i - 0); k++) {
          cout << " * ";
        }
        cout << endl; 
    }


 return 0;
}