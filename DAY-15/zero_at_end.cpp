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

    // Position to place the next non-zero element
    int index = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill the remaining positions with zeros
    while (index < n) {
        arr[index] = 0;
        index++;
    }

    cout << "ARRAY AFTER MOVING ZERO AT THE END: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}