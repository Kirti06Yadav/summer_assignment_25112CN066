#include<iostream>
using namespace std;

int main() {
    int r;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> r;
    char alphabet = 'A';

    for(int i=1; i<=r; i++) {
        for(int j=1; j<=i; j++) {
            cout << alphabet;
        }
        ++alphabet;
        cout << endl;
    }
    return 0;
}