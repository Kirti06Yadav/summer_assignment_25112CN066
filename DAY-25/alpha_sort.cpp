#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "ENTER THE NUMBER OF NAMES: ";
    cin >> n;

    string names[n];

    // Input names
    cout << "ENTER THE NAMES:\n";
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Sort names alphabetically using Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                // Swap names
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "NAMES IN ALPHABETICAL ORDER:\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}