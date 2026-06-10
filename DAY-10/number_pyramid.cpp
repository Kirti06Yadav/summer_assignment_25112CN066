#include<iostream>
using namespace std;

int main() {
    int r;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> r;

    for(int i=1; i<=r; i++) {  //lop for row
        for (int j=1; j<=r-i; j++) {  //loop for spacing 
            cout << " ";
        }
        for(int j=1; j<=i; j++) {  // loop for printing number in increasing order
            cout << j;
        }
        for(int j=i-1; j>=1; j--) {  //loop for printimg numbers in decreasing order
            cout << j;
        }
        cout << endl;  //move to the next line
    }
    return 0;
}