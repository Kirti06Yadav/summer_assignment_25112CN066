#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "ENTER A LINE: ";
    getline(cin,str); //reads until newline, includes spaces
\
    // Using reverse() function to reverse s
    reverse(str.begin(), str.end());

    cout << "THE REVERSE STRING IS: " << str;
    return 0;
}