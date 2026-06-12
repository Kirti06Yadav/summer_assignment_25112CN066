#include <iostream>
using namespace std;

bool isArmstrong(int num) {  // Function to check whether a number is an Armstrong number
    int originalNum = num;
    int sum = 0;

    // Calculate sum of cubes of digits
    while (num > 0) {
        int digit = num % 10;      
        sum += digit * digit * digit;
        num /= 10;                
    }

    return (sum == originalNum);   // Check if sum equals the original number
}

int main() {
    int num;
    cout << "ENTER A NUMBER: ";
    cin >> num;

    if (isArmstrong(num))
        cout << "ARMSTRONG NUMBER";
    else
        cout << "NOT AN ARMSTRONG NUMBER";

    return 0;  
}