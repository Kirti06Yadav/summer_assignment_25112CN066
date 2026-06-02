#include<iostream>
using namespace std;
int main() {
    int n, rev=0;
    cout << "ENTER A NUMBER: ";
    cin >> n;
    int original = n;

    while(n>0) {
        int digit = n%10;
        rev = rev*10+digit;
        n/=10;
    }

    if(original == rev)
      cout << "NUMBER IS PALINDROME.";
    else
      cout << "NUMBER IS NOT PALINDROME.";

    return 0;
}