#include<iostream>
using namespace std;

bool prime(int n){  //function to check if number is prime or not
    if(n<2)  //number less than 2 are not prime
      return false;

    for(int i=2; i<n; i++) {  //check factor from 2 to n-1
        if (n%i==0)
          return false;
    }
    return true;
}
int main() {
    int num;
    cout << "ENTER A NUMBER: ";
    cin >> num;

    if(prime(num))   //function calling
      cout << num << " IS A PRIME NUMBER.";
    else
      cout << num << " IS NOT A PRIME NUMBER.";

    return 0;
}