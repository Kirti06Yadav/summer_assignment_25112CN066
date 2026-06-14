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

    // Assume first two elements as largest and second largest
    int largest, secondLargest;

    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Find the largest and second largest elements
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "SECOND LARGEST ELEMENT = " << secondLargest << endl;

    return 0; 
}