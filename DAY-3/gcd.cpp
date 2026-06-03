#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(a==0 || b==0)
      return max(a,b);

    int result = min(a,b);
    while(result>0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}

int main() {
    int n1, n2;
    cout << "ENTER FIRST NUMBER: ";
    cin >> n1;
    cout << "ENTER SECOND NUMBER: ";
    cin >> n2;

    cout << gcd(n1,n2);
    return 0;
}