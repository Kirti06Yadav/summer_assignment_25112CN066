#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "ENTER ROW AND COLUMN OF FIRST MATRIX: ";
    cin >> r1 >> c1;

    cout << "ENTER ROW AND COLUMN OF SECOND MATRIX: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "MATRIX MULTIPLICATION NOT POSSIBLE." << endl;
        return 0;
    }

    int a[100][100], b[100][100], result[100][100];

    //storing elements of first matrix
    cout << "ENTER ELEMENTS OF FIRST MATRIX:\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "ENTER ELEMENT a " << i+1 << j+1 << ":";
            cin >> a[i][j];
        }
    }

    //storing elements of second matrix
    cout << "ENTER ELEMENTS OF SECOND MATRIX:\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "ENTER ELEMENT b " << i+1 << j+1 << ":";
            cin >> b[i][j];
        }
    }

    // Initialize result matrix
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            result [i][j] = 0;

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "RESULTANT MATRIX:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}