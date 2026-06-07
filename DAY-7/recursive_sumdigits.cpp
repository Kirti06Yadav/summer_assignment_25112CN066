#include<iostream>
using namespace std;

int sumDigits(int n) {
    if(n<10)
      return n;
    
    return (n%10) + sumDigits(n/10); //recursive case
}
 int main(){
    int num;
    cout << "ENTER A  NUMBER: ";
    cin >> num;

    cout << sumDigits(num) << endl; //fuction calling
    return 0;
 }