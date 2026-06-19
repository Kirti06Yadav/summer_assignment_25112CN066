#include<iostream>
using namespace std;

int main(){
    int a[100][100], transpose[100][100], r, c;

    cout << "ENTER THE NUMBER OF ROWS AND COLUMS OF MATRIX(BETWEEN 1 AND 100):";
    cin >> r >> c;

    //storing matrix element 
    cout << "ENTER ELEMENTS OF MATRIX: " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "ENTER ELEMENT a " << i+1 << j+1 << ": ";
            cin >> a[i][j];
        }
    }

    //printing the entered matrix
    cout << "ENTERED MATRIX: " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << " " << a[i][j];
            if(j==c-1)
              cout << endl ;
        }
    }

    //calculating transpose of a matrix
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
      }
    }

    //printing transpose matrix
    cout << "TRANSPOSE OF MATRIX: " << endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            cout << " " << transpose[i][j];
            if(j==r-1)
              cout << endl;
      }
    }

    return 0;
}