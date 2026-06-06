#include<iostream>
#include<bitset>
using namespace std;

int main() {
    int dec;
    cout << "ENTER A NUMBER: ";
    cin >> dec;

    bitset<4>binary(dec);      //4 bits here are the number of digits we want in the binary form
    cout << "BINARY: " << binary << endl;

    return 0;
}