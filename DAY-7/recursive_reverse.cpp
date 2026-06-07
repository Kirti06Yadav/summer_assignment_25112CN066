#include<iostream>
using namespace std;

int reverse(int n, int reversed=0) {
    if (n==0)
      return reversed;

    return reverse(n/10, reversed*10+n%10);
    
}
int main() {
    int num;
    cout << "ENTER A NUMBER: ";
    cin >> num;

    cout << "REVERSED NUMBER: " << reverse(num) << endl;
    return 0;
}