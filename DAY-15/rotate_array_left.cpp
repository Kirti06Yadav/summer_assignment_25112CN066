#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;

    int arr[n];
    cout << "ENTER THE ARRAY ELEMENT: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Store the first element
    int first = arr[0];

    // Shift all elements one position to the left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Place the first element at the last position
    arr[n - 1] = first;

    cout << "ARRAY AFTER LEFT ROTATION: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}