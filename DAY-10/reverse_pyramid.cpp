#include<iostream>
using namespace std;

int main() {
    int r;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> r;

    for(int i=r; i>=1; i--) {  //loop for rows
        for(int j=0; j<r-i; j++) {  //loop for giving spacing 
            cout << " ";
        }
        for(int k=1; k<=(2*i-1); k++) {  //loop for printing stars
            cout << "*";
        }
        cout << endl; // move to next line
    }
    return 0;
}