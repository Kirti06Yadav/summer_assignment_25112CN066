#include<iostream>
using namespace std;
int main(){
    int r, c, a[100][100], b[100][100], sum[100][100];

    cout << "ENTER THE NUMBER OF ROWS(BETWEEN 1 AND 100): ";
    cin >> r;

    cout << "ENTER THE NUMBER OF COLUMN(BETWEEN 1 AND 100): ";
    cin >> c;

    //storing elements of first matrix
    cout << "ENTER ELEMENTS OF FIRST MATRIX: " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "ENTER ELEMENT a " << i+1 << j+1 << ":";
            cin >> a[i][j];
        }
    }

    //storing elements of second matrix
    cout << "ENTER THE ELEMENTS OF SECOND MATRIX: " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "ENTER ELEMENT b " << i+1 << j+1 << ":";
            cin >> b[i][j];
        }
    }

    //subtracting two matrices
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "SUBTRACTION OF TWO MATRICES IS: " << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }
    }

    return 0;
}