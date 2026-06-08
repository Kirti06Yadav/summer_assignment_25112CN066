#include<iostream>
using namespace std;

int main() {
    int r;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> r;

    for(int i=0; i<r; i++) {  //loop that manages row
        for(int j=0; j<=i; j++) {  // loop that manages column
            cout << "*";
        }
        cout << endl;  //end line after each row
    }
    return 0;
}