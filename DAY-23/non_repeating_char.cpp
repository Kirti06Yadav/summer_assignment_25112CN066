#include<iostream>
#include<string>
using namespace std;
 
int main(){
    string str;
    cout << "ENTER A STRING: ";
    cin >> str;
    
    //transverse each character
    for(int i=0; i<str.length(); i++){
        int count = 0;

        //count how many time str[i] appears in string
        for(int j=0; j<str.length(); j++){
            if(str[i]==str[j])
              count++;
        }

        if(count==1){
            cout << "FIRST NON REPEATING CHARACTER IS: " << str[i];
            break;
        }

        else
           cout << "NO NON REPEATING CHARACTER FOUND.";
           break;

    }

    return 0;
}