#include<iostream>
using namespace std;

int main() {
    int r;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> r;

    for(int i=1; i<=r; i++) {
        if(i==1 || i==r)
          for(int j=1; j<=r; j++) {
            cout << "*";
          }
        else 
          for(int j=1; j<=r; j++) {
            if(j==1||j==r)
              cout << "*";

            else
              cout << " ";
          }
        cout << endl;
    }
    return 0;
}