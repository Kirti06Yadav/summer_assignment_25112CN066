#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0||n==1)  //if n is 0 or 1 , fuction will return 1
      return 1;
    
    return n*factorial(n-1); //recursive case: n into factorial of (n-1)
}

int main() {
    int num;
    cout << "ENTER A NUMBER: ";
    cin >> num;

    cout << "FACTORIAL OF " << num << " IS: " << factorial(num); //function call
    return 0;
}