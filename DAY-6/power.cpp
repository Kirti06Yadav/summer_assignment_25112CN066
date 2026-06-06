#include<iostream>
using namespace std;

double exponent(double b, int p)
{
    if(p==0)  //power(b,0)=1
      return 1;

    double temp = exponent(b,p/2); //calculates power of half the exponent

    if(p%2==0) //exponent is even: b^e = (b^(e/2))^2
      return temp*temp;

    else  //exponent is odd: b^e = b*(b^(e/2))^2
      return b*temp*temp;
      
}
int main() {
    double base;
    int power;
    
    cout << "ENTER BASE NUMBER: ";
    cin >> base;
    cout << "ENTER POWER: ";
    cin >> power;

    double result = exponent(base,power);
    cout << result;
    return 0;
}