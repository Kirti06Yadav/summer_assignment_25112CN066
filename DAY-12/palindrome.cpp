#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int left = 0;                     // Start index
    int right = str.length() - 1;     // End index

    // Compare characters from both ends
    while (left < right) {
        if (str[left] != str[right])
            return false;             // Not a palindrome

        left++;                       // Move forward
        right--;                      // Move backward
    }

    return true;                      // String is a palindrome
}

int main() {
    string str;
    cout << "ENTER A STRING: ";
    cin >> str;

    if (isPalindrome(str))
        cout << "PALINDROME";
    else
        cout << "NOT A PALINDROME";

    return 0;                         
}