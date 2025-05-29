//multipal matrix//
#include <iostream>
using namespace std;

int main() {
    int A[10][10], B[10][10], result[10][10];
    int m, n, p, q;

    cout << "Enter rows and columns for first matrix (A): ";
    cin >> m >> n;
    cout << "Enter rows and columns for second matrix (B): ";
    cin >> p >> q;
    if (n != p) {
        cout << "Matrix multiplication not possible! (columns of A != rows of B)\n";
        return 1;
    }
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Resultant Matrix (A x B):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

 return 0;
}