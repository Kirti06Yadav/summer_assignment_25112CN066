#include<iostream>
using namespace std;

int main(){
    int a[100][100], r, c, sum=0;

    cout << "ENTER THE NUMBER OF ROWS AND COLUMS OF MATRIX(BETWEEN 1 AND 100):";
    cin >> r >> c;

    //storing matrix element 
    cout << "ENTER ELEMENTS OF MATRIX: " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "ENTER ELEMENT a " << i+1 << j+1 << ":";
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

    //calculating the sum of diagonal elements of the matrix
    for(int i=0; i<r; i++){
  		sum = sum + a[i][i];
  	}
  	
    cout << "THE SUM OF DIAGONAL ELEMNETS: " << sum;

    return 0;
}