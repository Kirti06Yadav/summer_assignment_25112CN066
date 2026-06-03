#include<iostream>
using namespace std;
int lcm(int a, int b) {
    int g = max(a,b);
    int s = min(a,b);

    for(int i=g; i<=a*b; i+=g) {
        if(i%s == 0)
          return i;
    }
}
int main() {
    int n1, n2;
    cout << "ENTER FIRST NUMBER: ";
    cin >> n1;
    cout << "ENTER SECONF NUMBER: ";
    cin >> n2;

    cout << lcm(n1,n2);
    return 0;
}