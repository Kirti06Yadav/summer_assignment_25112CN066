#include <iostream>
using namespace std;

int main() {
    int arr[100], n;  //array and its size
    int evenCount = 0, oddCount = 0;  //variable to count even and odd number

    cout << "ENTER THE NUMBER OF ELEMENTS ";
    cin >> n;

    cout << "ENTER " << n << " ELENTS:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            evenCount++;   //increment of even counter
        else
            oddCount++;  //increment of odd counter
    }

    cout << "NUMBER OF EVEN ELEMENTS = " << evenCount << endl;
    cout << "NUMBER OF ODD ELEMENTS = " << oddCount << endl;

    return 0;
}