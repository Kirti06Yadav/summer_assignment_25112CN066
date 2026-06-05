#include<iostream>
using namespace std;

void factor(int n) {
    for(int i=1; i<=n; i++) {
        if(n%i==0)
          cout << i << endl;
    }
}
int main() {
    int num;
    cout << "ENTER A  NUMBER: ";
    cin >> num;

    cout << "THE FACTORS OF " << num << "ARE : " << endl;
    factor(num);

    return 0;
}