#include<iostream>
using namespace std;

void generatefibonacci(int x) {
    int a=0, b=1, c;
    cout << a << endl << b << endl;
    for(int i=2; i<x; i++) {
        c=a+b;
        cout << c << endl;
        a=b;
        b=c;
    }
}
int main() {
    int n = 10;
    generatefibonacci(n);
    return 0;
}