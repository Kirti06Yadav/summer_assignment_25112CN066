#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "ENTER THE NUMBER OF WORDS: ";
    cin >> n;

    string words[n];

    cout << "ENTER THE WORDS:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    // Sort words by length using Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (words[j].length() > words[j + 1].length()) {
                // Swap words
                string temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }

    cout << "WORDS SORTED BY LENGTH:\n";
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}