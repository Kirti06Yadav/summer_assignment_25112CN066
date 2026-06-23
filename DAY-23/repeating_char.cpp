#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "ENTER A STRING: ";
    cin >> str;

    // Check each character
    for (int i = 0; i < str.length(); i++) {
        
        // Compare with all characters after it
        for (int j = i + 1; j < str.length(); j++) {
            
            // If a match is found, it is the first repeating character
            if (str[i] == str[j]) {
                cout << "First repeating character: " << str[i] << endl;
                return 0; // Exit the program
            }
        }
    }

    // If no repeating character is found
    cout << "No repeating character found." << endl;

    return 0;
}
