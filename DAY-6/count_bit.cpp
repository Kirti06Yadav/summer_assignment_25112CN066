#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        count += n % 2;  // Add 1 if remainder is 1
        n /= 2;          // Divide by 2
    }

    cout << "Number of set bits = " << count;

    return 0;
}