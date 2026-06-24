#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    
    cout << "ENTER A STRING: ";
    cin >> str;

    string compressed = "";
    int count = 1;

    // Traverse the string
    for (int i = 0; i < str.length(); i++)
    {
        // Counting consecutive occurrences of the same character
        while (i < str.length() - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        // Add character and its count to the compressed string
        compressed += str[i];
        compressed += to_string(count);

        // Reset count for the next character
        count = 1;
    }

    cout << "COMPRESSED STRING: " << compressed << endl;

    return 0;
}