#include <iostream>
using namespace std;

int main() {
    int a1[100], a2[100], n1, n2; // array and its size

    cout << "ENTER THE NUMBER OF ELEMENTS OF FIRST ARRAY: ";
    cin >> n1;

    cout << "ENTER " << n1 << " ELEMENTS OF FIRST ARRAY: " << endl;
    for (int i = 0; i < n1; i++) {
        cin >> a1[i];   //store each element in the array
    }

    cout << "ENTER THE NUMBER OF ELEMENTS OF SECOND ARRAY: ";
    cin >> n2;

    cout << "ENTER " << n2 << " ELEMENTS OF FIRST ARRAY: " << endl;
    for (int i = 0; i < n2; i++) {
        cin >> a2[i];   //store each element in the array
    }

    int n3 = n1+n2;
    int merge[n3];

    int i = 0, j = 0, k = 0;
    // traverse the arr1 and insert its element in arr3
    while(i < n1){
      merge[k++] = a1[i++];
    }
      
    // now traverse arr2 and insert in arr3
    while(j < n2){
      merge[k++] = a2[j++];
    }

    // Bubble Sort algorithm
    for (int i = 0; i < n3 - 1; i++) {

        // Flag to check if swapping occurs
        bool swapped = false;

        // Compare adjacent elements
        for (int j = 0; j < n3 - i - 1; j++) {

            // Swap if elements are in wrong order
            if (merge[j] > merge[j + 1]) {
                int temp = merge[j];
                merge[j] = merge[j + 1];
                merge[j + 1] = temp;

                swapped = true;
            }
        }

        // If no swapping happened, array is already sorted
        if (!swapped) {
            break;
        }
    }

    cout << "SORTED MERGED ARRAY: ";
    for (int i = 0; i < n3; i++) {
        cout << merge[i] << " ";
    }

    return 0;
}