#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "ENTER A SENTENCE: ";
    cin >> str;

    str += ' ';  // Add space at the end
    string word = "", longest = "";

    // Traverse each character of the string
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')    // If the current character is not a space, keep adding it to the current word
        {
            word += str[i];
        }
        else  // A space indicates the end of a word
        {
            if (word.length() > longest.length())   // Check if the current word is longer than the longest word found

                longest = word;

            word = "";  // Reset 'word' to store the next word
        }
    }

    cout << "LONGEST WORD: " << longest;
    return 0;
}