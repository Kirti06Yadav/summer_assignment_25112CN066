#include<iostream>
using namespace std;

int factorial(int n) {
    int fact=1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, org, last, sum=0;
    cout << "ENTER A NUMBER: ";
    cin >> num;

    org = num;
    while(num>0) {
        last = num%10;
        sum += factorial(last);
        num /= 10;
    }

    if(sum==org)
      cout << org << " IS A STRONG NUMBER.";
    else
      cout << org << " IS NOT A STRONG NUMBER.";

    return 0;
}