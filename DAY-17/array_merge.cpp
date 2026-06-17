#include <iostream>
using namespace std;

int main() {
    int size1, size2;

    cout << "ENTER THE SIZE OF FIRST ARRAY: ";
    cin >> size1;

    int arr1[size1];
    cout << "ENTER ELEMENTS OF FIRST ARRAY: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "ENTER THE SIZE OF SECOND ARRAY: ";
    cin >> size2;

    int arr2[size2];
    cout << "ENTER THE ELEMENTS OF SECOND ARRAY: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int merged[size1 + size2];    // Creating merged array

    // Copy first array into merged array
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array into merged array
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    cout << "MERGED ARRAY: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << merged[i] << " ";
    }

    cout << endl;
    return 0;
}