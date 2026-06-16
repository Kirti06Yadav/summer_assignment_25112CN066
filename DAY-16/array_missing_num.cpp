//Assumption: The array contains numbers from 1 to n with one number missing.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;

    int arr[n];
    cout << "ENTER THE ELEMENTS:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sum of numbers from 1 to (n + 1)
    int totalSum = (n + 1) * (n + 2) / 2;

    // Sum of array elements
    int arraySum = 0;
    for (int i = 0; i < n; i++) {
        arraySum += arr[i];
    }

    // Find the missing number
    int missing = totalSum - arraySum;

    cout << "Missing number = " << missing << endl;

    return 0;
}