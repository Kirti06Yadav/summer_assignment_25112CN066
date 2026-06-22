#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    int count = 0;

    cout << "ENTER A STRING: ";
    getline(cin, str);

    cout << "ENTER A CHARACTER: ";
    cin >> ch;

    // Count frequency
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Display result
    cout << "FREQUENCY OF '" << ch << "' = " << count << endl;

    return 0;
}