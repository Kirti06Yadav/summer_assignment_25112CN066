#include<iostream>
using namespace std;
int main() {
    int n, rem, sum=0;
    cout << "ENTER A NUMBER: ";
    cin >> n;

    while(n!=0) {
        rem = n%10;
        sum+= rem;
        n/=10;
    }

    cout << "SUM OF DIGITS: " << sum;
    return 0;
}