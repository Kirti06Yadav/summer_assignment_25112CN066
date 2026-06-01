#include <iostream>
using namespace std;

int digits(int n) {
    if (n==0)
      return 1;
    
    int count=0;
    while(n!=0) {
        n=n/10;
        count++;
    }
    return count;

}

int main() {
    int n;
    cout << "ENTER A NUMBER: ";
    cin >> n;

    cout << digits(n);
    return 0;

}