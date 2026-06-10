#include<iostream>
using namespace std;

int main() {
    int r;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> r;
    
    for(int i=1; i<=r; i++) {  //loop for rows
        for(int j=1; j<=r-i; j++) {  //loop for printing spaces
            cout << " ";
        }
        for(int k=1; k<=2*i-1; k++) {  //loop to print stars in rows
            cout << "*";
        }

        cout << endl;   //move to next line after each row
    }
    return 0;
}