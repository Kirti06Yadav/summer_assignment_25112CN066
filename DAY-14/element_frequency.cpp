#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key;
    int frequency = 0;   // Variable to store frequency count

    cout << "ENTER NUMBER OF ELEMENTS: ";
    cin >> n;

    // Input array elements
    cout << "ENTER " << n << " ELEMENTS:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element whose frequency is to be found
    cout << "ENTER ELEMENT TO FIND FREQUENCY: ";
    cin >> key;

    // Count frequency of the element
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            frequency++;   // Increment frequency count
        }
    }
    cout << "FREQUENCY OF " << key << " = " << frequency << endl;

    return 0; 
}