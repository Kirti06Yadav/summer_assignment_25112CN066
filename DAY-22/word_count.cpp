#include <iostream>
#include <string.h>
using namespace std;

int main() {
  string str;
  int i, count = 0;

  cout << "WRITE A STRING: ";
  getline(cin, str);

  // Traverse the entire string
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == ' ') {  // Check if the current character is a space
      count++;            // Increment count for every space found
    }
  }

  cout << "NUMBER OF WORDS IN THE GIVEN SENTENCE IS: " << count + 1;

  return 0;
}
