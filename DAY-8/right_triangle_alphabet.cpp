#include<iostream>
using namespace std;

int main() {
    int r;
    cout << "ENTER NUMEBER OF ROWS: ";
    cin >> r;

    for(int i=1; i<=r; i++) { //loop for rows
        for(int j=1; j<=i; j++) {  //loop for column
            cout << (char)('A'+j-1);
        }
        cout << endl;
    }
    return 0;
}