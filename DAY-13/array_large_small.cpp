#include <iostream>
using namespace std;

int main() {
    int arr[100], n;  //array and its size

    cout << "ENTER NUMBER OF ELEMENTS: ";
    cin >> n;

    cout << "ENTER " << n << " ELEMENTS:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // assuming first element is both largest and smallest
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];  //updates largest element

        if (arr[i] < smallest)
            smallest = arr[i];   //updates smallest element
    }

    cout << "LARGEST ELEMENT = " << largest << endl;
    cout << "SMALLEST ELEMENT = " << smallest << endl;

    return 0;
}