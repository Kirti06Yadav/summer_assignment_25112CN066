#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "ENTER THE NUMBER OF ROWS AND COLUMN: ";
    cin >> r >> c;

    int a[100][100];

    //storing elements of matrix
    cout << "ENTER MATRIX ELEMENTS:\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "ENTER ELEMENT a " << i+1 << j+1 << ": ";
            cin >> a[i][j];
        }
    }

    cout << "\nCOLUMN-WISE SUM ARE:\n";

    //calculating column wise sum
    for (int j = 0; j < c; j++) {
        int sum = 0;

        for (int i = 0; i < r; i++) {
            sum += a[i][j];
        }

        cout << "SUM OF COLUMN " << j + 1 << " = " << sum << endl;
    }

    return 0;
}