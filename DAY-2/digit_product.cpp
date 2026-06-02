#include<iostream>
using namespace std;
int main() {
    int n, product=1;
    cout << "ENTER A NUMBER: ";
    cin >> n;

    while(n!=0) {
        product = product*(n%10);
        n = n/10;
    }

    cout << "PRODUCT OF DIGITS: " << product;
    return 0;
}