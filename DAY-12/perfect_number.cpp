#include <iostream>
using namespace std;

bool isPerfect(int num) {   // Function to check whether a number is a Perfect Number
    int sum = 0;

    for (int i = 1; i < num; i++) {   // Find sum of proper divisors
        if (num % i == 0)
            sum += i;
    }

    // Check if sum of divisors equals the number
    return (sum == num);
}

int main() {
    int num;
    cout << "ENTER A NUMBER: ";
    cin >> num;

    if (isPerfect(num))
        cout << "PERFECT NUMBER";
    else
        cout << "NOT A PERFECT NUMBER";

    return 0; 
}