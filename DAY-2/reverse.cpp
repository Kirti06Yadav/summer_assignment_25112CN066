#include<iostream>
using namespace std;
int main() {
    int n, rem, rev=0;
    cout << "ENTER A NUMBER: ";
    cin >> n;

    while(n!=0) {
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }

    cout << "REVERSED NUMBER: " << rev;
    return 0;
}