#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;

    int arr[n];
    cout << "ENTER THE ARRAY ELEMENTS: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Store the last element
    int last = arr[n - 1];

    // Shift all elements one position to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place the last element at the first position
    arr[0] = last;

    cout << "ARRAY AFTER RIGHT ROTATION: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}