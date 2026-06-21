#include<iostream>
#include<string>
using namespace std;

int main(){
    string c;
    int i;

    cout << "ENTER A LINE: ";
    getline(cin,c); //reads until newline, includes spaces

    for(i=0; c[i]; i++);
    cout << "THE LENGTH OF THE STRING IS: " << i;
    
    return 0;
}