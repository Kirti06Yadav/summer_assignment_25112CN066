#include<iostream>
using namespace std;

int factorial(int n) {   //function to calculate factorial
    int fact=1;
    
    for(int i=1; i<=n; i++){  //multiplication from 1 to n
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "ENTER A NUMBER: ";
    cin >> num;

    cout << "THE FACTORIAL IS: " << factorial(num);  //function calling

    return 0;
}