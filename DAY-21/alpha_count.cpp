#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;

    cout << "ENTER A STRING: ";
    getline(cin, str);

    // Traverse each character in the string
    for (char ch : str) {
        ch = tolower(ch);  // Convert to lowercase

        // Check if the character is an alphabet
        if (isalpha(ch)) {
            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    // Display the results
    cout << "NUMBER OF VOWELS IN GIVEN STRING: " << vowels << endl;
    cout << "NUMBER OF CONSONANTS IN GIVEN STRING: " << consonants << endl;

    return 0;
}