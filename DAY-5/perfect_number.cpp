#include<iostream>
using namespace std;
int main() {
    int n, sum=0;
    cout << "ENTER A NUMBER: ";
    cin >> n;

    for(int i=1; i<n; i++) {
        if(n%i==0)
          sum = sum+i;
    }
    if(sum==n)
      cout << n << " IS A PERFECT NUMBER.";

    else
      cout << n << " IS NOT A PERFECT NUMBER.";

    return 0;
}