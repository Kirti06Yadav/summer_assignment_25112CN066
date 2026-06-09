#include<iostream>
using namespace std;
int main() {
    int r;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> r;

    for(int i=r; i>=1; i--) { //loop for rows
        for(int j=1; j<=i; j++) {  //loops for column
            cout << j;
        }
        cout << endl;  //end line after each row
    }
    return 0;
}

