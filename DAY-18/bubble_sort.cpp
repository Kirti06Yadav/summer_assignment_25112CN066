#include <iostream>
using namespace std;

int main() {
   int size;
    cout << "ENTER THE SIZE OF ARRAY: ";
    cin >> size;

    int arr[size];
    cout << "ENTER ELEMENTS OF ARRAY: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

     // Bubble Sort algorithm
    for (int i = 0; i < size - 1; i++) {

        // Flag to check if swapping occurs
        bool swapped = false;

        // Compare adjacent elements
        for (int j = 0; j < size - i - 1; j++) {

            // Swap if elements are in wrong order
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        // If no swapping happened, array is already sorted
        if (!swapped) {
            break;
        }
    }

    cout << "SORTED ARRAY: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

  
   return 0;
}