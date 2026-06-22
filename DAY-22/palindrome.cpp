#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, rev = "";

    cout << "ENTER A STRING: ";
    getline(cin, str);

    // Create the reversed string
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    // Compare original and reversed strings
    if (str == rev) {
        cout << "THE STRING IS PALINDROME." << endl;
    } else {
        cout << "THE STRING IS NOT PALINDROME." << endl;
    }

    return 0;
}