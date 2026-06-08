#include<iostream>
using namespace std;
  
int main() {
    int r;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> r;

    int num=1;
    for(int i=0; i<r; i++) {
        for(int j=0; j<=i; j++) {
            cout << num;
        }
        num = num+1;
        cout << endl;
    }
    return 0;
}