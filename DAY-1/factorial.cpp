#include<iostream>
using namespace std;
int main() {
    int num, result=1;
    cout << "ENTER A NUMBER: ";
    cin >> num;

    for(int i=1; i<=num; i++) {
        result*=i;
    }

    cout << "FACTORIAL OF " << num << " IS " << result << endl;
    return 0;
}