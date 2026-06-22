#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";

    cout << "ENTER A STRING: ";
    getline(cin, str);

    // Remove spaces
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            result += str[i];
        }
    }

    // Display the string without spaces
    cout << "STRING AFTER REMOVING SPACES: " << result << endl;

    return 0;
}