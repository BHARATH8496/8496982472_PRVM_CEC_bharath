//matrix addition//
#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int mat1[ROWS][COLS], mat2[ROWS][COLS], sum[ROWS][COLS];
    cout << "Enter elements of first 3x3 matrix:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter elements of second 3x3 matrix:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> mat2[i][j];
}
    }
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << "\nSum of the two matrices:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
