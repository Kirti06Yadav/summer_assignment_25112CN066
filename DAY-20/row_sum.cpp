#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "ENTER THE NUMBER OF ROWS AND COLUMN: ";
    cin >> r >> c;

    int a[100][100];

    //storing elements of matrix
    cout << "ENTER THE MATRIX ELEMENTS:\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "ENTER ELEMENT a " << i+1 << j+1 << ": ";
            cin >> a[i][j];
        }
    }


    cout << "\nROW-WISE SUM ARE:\n";

    //calculating row-wise sum
    for (int i = 0; i < r; i++) {
        int sum = 0;

        for (int j = 0; j < c; j++) {
            sum += a[i][j];
        }

        cout << "SUM OF ROW " << i + 1 << " = " << sum << endl;
    }

    return 0;
}