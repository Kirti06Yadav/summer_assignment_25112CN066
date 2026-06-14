#include <iostream>
using namespace std;

int main() {
    int arr[100], n; // array and its size

    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;

    cout << "ENTER " << n << " ELEMENTS: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   //store each element in the array
    }

    cout << "ARRAY ELEMENTS ARE: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";   //print each element of the array
    }

    return 0;
}