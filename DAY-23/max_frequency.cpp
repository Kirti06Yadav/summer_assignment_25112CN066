#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "ENTER A STRING: ";
    cin >> str;

    int maxCount = 0;
    char maxChar;

    // Find the frequency of each character
    for (int i = 0; i < str.length(); i++) {
        int count = 0;

        for (int j = 0; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        // Update maximum frequency and character
        if (count > maxCount) {
            maxCount = count;
            maxChar = str[i];
        }
    }

    // Check if any character repeats
    if (maxCount == 1) {
        cout << "NO REPEATING ELEMENT FOUND." << endl;
    } 
    else {
        cout << "MAXIMUM OCCURING CHARACTER: " << maxChar << endl;
        cout << "FREQUENCY OF THAT CHARACTER: " << maxCount << endl;
    }

    return 0;
}