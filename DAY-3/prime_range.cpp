#include<iostream>
using namespace std;

int isprime(int num) {
    for(int i=2; i*i<=num; i++) {
        if(num%i==0)
          return 0;
    }
    return 1;
}

int main() {
    int n1, n2;
    cout << "ENTER MIN RANGE: ";
    cin >> n1;
    cout << "ENTER MAX RANGE: ";
    cin >> n2;
    
    for(int i=n1; i<=n2; i++) {
        if(isprime(i))
          cout << i << endl;
    }
}