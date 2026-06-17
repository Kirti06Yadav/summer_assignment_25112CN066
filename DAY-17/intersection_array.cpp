#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "ENTER THE SIZE OF FIRST ARRAY ";
    cin >> n1;

    int arr1[n1];
    cout << "ENTER THE ELEMENTS OF FIRST ARRAY: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "ENTER THE SIZE OF SECOND ARRAY: ";
    cin >> n2;

    int arr2[n2];
    cout << "ENTER THE ELEMENTS OF SECOND ARRAY: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int intersection[n1];
    int k = 0;

    // Find common elements
    for (int i = 0; i < n1; i++) {
        bool found = false;

        // Check if arr1[i] exists in arr2
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }

        // Avoid duplicates in intersection array
        bool duplicate = false;
        for (int j = 0; j < k; j++) {
            if (intersection[j] == arr1[i]) {
                duplicate = true;
                break;
            }
        }

        // Add element if it is common and not already added
        if (found && !duplicate) {
            intersection[k++] = arr1[i];
        }
    }

    cout << "INTERSECTION OF ARRAY: ";
    for (int i = 0; i < k; i++) {
        cout << intersection[i] << " ";
    }

    return 0;
}