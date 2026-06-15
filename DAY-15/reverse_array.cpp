#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Reverse the array by swapping elements
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];          // Store current element
        arr[i] = arr[n - 1 - i];   // Replace with corresponding element from the end
        arr[n - 1 - i] = temp;     // Put stored value at the end position
    }

    cout << "REVERSED ARRAY: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0; 
}