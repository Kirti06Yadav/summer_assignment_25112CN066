#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;

    cout << "ENTER FIRST STRING: ";
    cin >> str1;

    cout << "ENTER SECOND STRING: ";
    cin >> str2;

    // If lengths are different, they cannot be rotations
    if (str1.length() != str2.length())
    {
        cout << "NOT A ROTATION";
        return 0;
    }

    // Concatenate the first string with itself
    string temp = str1 + str1;

    // Check if the second string is a substring of temp
    if (temp.find(str2) != string::npos)
    {
        cout << "STRINGS ARE ROATION OF EACHOTHER.";
    }
    else
    {
        cout << "STRINGS ARE NOT ROATION OF EACHOTHER.";
    }

    return 0;
}