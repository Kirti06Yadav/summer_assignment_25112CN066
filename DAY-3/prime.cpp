#include<iostream>
using namespace std;
int main() {
    int n, count = 0;
    cout << "ENTER A NUMBER: ";
    cin >> n;


    if(n<=1)
      cout << n << " IS NOT A PRIME NUMBER.";

    else {
        for(int i=1; i<=n; i++) {
            if(n%i == 0)
              count++;
        }

        if(count>2)
          cout << n << " IS NOT PRIME NUMBER.";

        else
          cout << n << " IS PRIME NUMBER.";
    }
    return 0;
}