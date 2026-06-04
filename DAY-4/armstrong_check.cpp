#include <iostream>
using namespace std;
int main() {
    int n, x=0;
    cout << "ENTER A NUMBER: ";
    cin >> n;
    int temp = n;

    while(n>0) {
        int rem = n%10;
        x = (x)+(rem*rem*rem);
        n = n/10;
    }

    if(temp==x)
      cout << "IT IS AN ARMSTRONG NUMBER.";

    else 
      cout << "IT IS NOT AN ARMSTRONG NUMBER.";

    return 0;
}