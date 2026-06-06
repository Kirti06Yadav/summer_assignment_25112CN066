#include<iostream>
#include<string>
using namespace std;

int main() {
    string num;
    cout << "ENTER A BINARY NUMBER: ";
    cin >> num;

    int dec=0;
    int base=1;
    int length = num.length();  //length of binary string

    for(int i=length-1; i>=0; i--)  //transverse the binary number from right to left
    {
        if(num[i]=='1')  //if bit is 1, add its positional value
          dec += base;
        
        base = base*2;  //moves to the next power of 2
    }

    cout << dec << endl;
}