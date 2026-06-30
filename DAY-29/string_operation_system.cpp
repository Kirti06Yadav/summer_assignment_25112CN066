#include <iostream>
#include <string>
#include <algorithm> // For reverse()
using namespace std;

// Function to find the length of a string
void lengthOfString()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Length of the string = " << str.length() << endl;
}

// Function to compare two strings
void compareStrings()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1 == str2)
        cout << "Both strings are equal." << endl;
    else if (str1 > str2)
        cout << "First string is greater than second string." << endl;
    else
        cout << "First string is smaller than second string." << endl;
}

// Function to reverse a string
void reverseString()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    reverse(str.begin(), str.end());

    cout << "Reversed String = " << str << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== STRING OPERATIONS MENU ==========\n";
        cout << "1. Length of String\n";
        cout << "2. Compare Strings\n";
        cout << "3. Reverse String\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Clear the newline left by cin
        cin.ignore();

        switch (choice)
        {
        case 1:
            lengthOfString();
            break;

        case 2:
            compareStrings();
            break;

        case 3:
            reverseString();
            break;

        case 4:
            cout << "Exiting Program... Thank You!" << endl;
            break;

        default:
            cout << "Invalid Choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}