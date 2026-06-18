#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ENTER THE NUMBER OF ELMENTS: ";
    cin >> n;

    int arr[n];
    cout << "Enter THE ELEMENTS OF SORTED ARRAY: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    bool found = false;

    // Binary Search algorithm
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "ELEMENT FOUND AT INDEX " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;   // Search in right half
        }
        else {
            high = mid - 1;  // Search in left half
        }
    }

    // If element is not found
    if (!found) {
        cout << "ELEMNET NOT FOUND." << endl;
    }

    return 0;
}