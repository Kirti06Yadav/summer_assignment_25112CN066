#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key;
    bool found = false;   // Variable to check if element is found

    cout << "ENTER NUMBER OF ELEMENTS: ";
    cin >> n;

    // Input array elements
    cout << "ENTER " << n << " ELEMENTS:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to search
    cout << "ENTER ELEMENT TO SEARCH: ";
    cin >> key;

    // Perform linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "ELEMENT FOUND AT POSITION " << i + 1 << endl;
            found = true;
            break;   // Stop searching once found
        }
    }

    // If element is not found
    if (!found) {
        cout << "ELEMENT NOT FOUND" << endl;
    }

    return 0;  
}