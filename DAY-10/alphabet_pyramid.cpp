#include<iostream>
using namespace std;
int main () {
    int r;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> r;

    for(int i=1; i<=r; i++) {
        for (int j=1; j<=r-i; j++) {
            cout << " ";
        }
        for(char c='A'; c<'A'+i; c++) {
            cout << c;
        }
        for (char c='A'+i-2; c>='A'; c--) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}