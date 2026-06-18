#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;

    int arr[n];
    cout << "ENTER THE ELEMENTS OF THE ARRAY: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort algorithm
    for (int i = 0; i < n - 1; i++) {

        // Assuminh the current element is the minimum
        int minIndex = i;

        // Find the index of the smallest element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the smallest element with the current element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "SORTED ARRAY: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}