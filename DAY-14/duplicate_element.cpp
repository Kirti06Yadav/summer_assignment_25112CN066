#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    
    cout << "ENTER NUMBER OF ELEMENTS: ";
    cin >> n;

    // Input array elements
    cout << "ENTER " << n << " ELEMENTS:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "DUPLICATE ELEMENTS ARE: ";

    // Find duplicate elements
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if the element has already been processed
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                isDuplicate = true;
                break;
            }
        }

        // Count occurrences of the current element
        if (!isDuplicate) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }

            // Display element if it appears more than once
            if (count > 1) {
                cout << arr[i] << " ";
            }
        }
    }

    cout << endl;

    return 0;   
}