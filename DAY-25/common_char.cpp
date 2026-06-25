#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "ENTER FIRST STRING: ";
    cin >> str1;

    cout << "ENTER SECOND STRING: ";
    cin >> str2;

    bool commonFound = false;  // Flag to track if any common character exists

    cout << "COMMON CHARACTERS: ";

    for (int i = 0; i < str1.length(); i++) {
        bool alreadyPrinted = false;

        // Check if character was already processed
        for (int k = 0; k < i; k++) {
            if (str1[i] == str1[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        // Check if character exists in second string
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                cout << str1[i] << " ";
                commonFound = true;  // A common character is found
                break;
            }
        }
    }

    if (!commonFound) {
        cout << "NONE";
    }

    return 0;
}