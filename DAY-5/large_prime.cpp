#include<iostream>
using namespace std;

int largePrime(int n) {
    int largestPrime = -1;

    while(n%2==0) {
        largestPrime = 2;
        n /= 2;
    }

    for(int i=3; i*i<=n; i+=2) 
    {
        while(n%i==0) {
            largestPrime=i;
            n /= i;
        }
    }

    if(n>2) {
        largestPrime = n;
    }
    return largestPrime;
}

int main() {
    int n;
    cout << "ENTER A  NUMBER: ";
    cin >> n;

    int result = largePrime(n);
    cout << result << endl;

    return 0;
}