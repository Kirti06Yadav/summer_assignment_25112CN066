#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "ENTER A STRING: ";
    cin >> str;

    string result = "";

    for (int i = 0; i < str.length(); i++)
    {
        int j;
        // Check if current character already exists in result
        for (j = 0; j < result.length(); j++)
        {
            if (str[i] == result[j])
                break;
        }

        // If j reaches the end, character was not found
        if (j == result.length())
        {
            result += str[i];
        }
    }

    cout << "STRING AFTER REMOVING DUPLICATE ELEMENTS: " << result;

    return 0;
}