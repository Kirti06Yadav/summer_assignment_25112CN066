#include<iostream>
using namespace std;

int max(int a, int b){  //function to find maximum between 2 number
    if(a>b)            
      return a;
    else 
      return b;
}

int main() {
    int n1, n2;
    cout << "ENTER TWO NUMBERS: ";
    cin >> n1 >> n2;

    cout << "THE MAXIMUM NUMBER IS: " << max(n1,n2);  // function calling 
    return 0;
}