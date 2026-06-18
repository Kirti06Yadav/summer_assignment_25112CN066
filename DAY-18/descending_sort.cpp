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

    // Sort array in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            // Swap if the current element is smaller
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "ARRAY IN DESCENDING ORDER: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}