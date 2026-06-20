#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "ENTER THE ORDER OF THE MATRIX: ";
    cin >> n;

    int a[100][100];

    //storing element of matrix
    cout << "ENTER THE ELEMENTS OF MATRIX:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "ENTER ELEMENT a " << i+1 << j+1 << ": ";
            cin >> a[i][j];
        }
    }

    bool symmetric = true;

    //checking symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric)
        cout << "MATRIX IS SYMMETRIC.";
    else
        cout << "MATRIX IS NOT SYMMETRIC.";

    return 0;
}