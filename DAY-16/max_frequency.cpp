#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;

    int arr[n];
    cout << "ENTER THE ELEMENTS:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxFreq = 0;      // Stores the highest frequency
    int maxElement = arr[0]; // Stores the element with highest frequency

    // Finding frequency of each element
    for (int i = 0; i < n; i++) {
        int freq = 1;

        // Count occurrences of arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }

        // Update maximum frequency and corresponding element
        if (freq > maxFreq) {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }

    cout << "MAXIMUM FREQUENCY ELEMENT = " << maxElement << endl;
    cout << "FREQUENCY OF THE ELEMENT = " << maxFreq << endl;

    return 0;
}