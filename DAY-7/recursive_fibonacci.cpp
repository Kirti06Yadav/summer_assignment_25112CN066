#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0||n==1)
      return n;
    
    return fibonacci(n-1)+fibonacci(n-2); //recursive case
}

int main() {
    int num;
    cout << "ENTER THE NUMBER OF TERMS: ";
    cin >> num;

    cout << "FIBONACCI SERIES: " << endl;
    for(int i=0; i<num; i++){
        cout << fibonacci(i) << endl; //fuction call
    }
    return 0;
}