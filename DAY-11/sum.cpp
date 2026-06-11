#include<iostream>
using namespace std;

int sum(int a, int b){ 
    return a+b;  //function definition
}

int main() {
    int n1, n2;
    cout << "ENTER TWO NUMBERS: ";
    cin >> n1 >> n2;  //takes input 

    int result = sum(n1, n2);  //function calling

    cout << "THE SUM OF NUMBER IS: " << result;  
    return 0;
}
