#include <iostream>
using namespace std;
int main() {
    int n, next;
    int first=0, second=1;

    cout << "ENTER NUMBER OF TERMS: ";
    cin >> n;

    if(n>=0)
      cout << first << endl;
    
    if(n>=1)
      cout << second << endl;

    for(int i=2; i<n; i++) {
      next=first+second;
      cout << next << endl;
      first = second;
      second = next;
    }
    return 0;
}