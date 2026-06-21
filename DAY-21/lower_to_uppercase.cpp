#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "ENTER A STRING: ";
    getline(cin, str);

    // Convert each character to uppercase
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }

    cout << "UPPERCASE STRING: " << str << endl;

    return 0;
}