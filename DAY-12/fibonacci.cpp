#include <iostream>
using namespace std;

void fibonacci(int n) {   // Function to generate Fibonacci series up to n terms
    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++) {
        cout << first << " ";

        next = first + second; // Calculate next term
        first = second;        // Update first term
        second = next;         // Update second term
    }
}

int main() {
    int n;
    cout << "ENTER NUMBER OF TERMS: ";
    cin >> n;

    cout << "FIBONACCI SERIES: ";
    fibonacci(n);

    return 0; 
}