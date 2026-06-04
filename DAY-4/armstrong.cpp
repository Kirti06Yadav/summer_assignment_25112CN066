#include<iostream>
#include<cmath>
using namespace std;

int order(int num) {
    int count = 0;
    if(num==0)
      return 1;

    while (num>0) {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int num)  {
    int digits =order(num);
    int temp = num;
    int sum = 0;

    while(temp>0) {
        int digit = temp%10;
        sum += (int)pow(digit,digits);
        temp /= 10;
    }
    return sum==num;
}

int main() {
    int n1, n2;
    cout << "ENTER MIN RANGE: ";
    cin >> n1;
    cout << "ENTER MAX RANGE: ";
    cin >> n2;

    for(int i=n1; i<=n2; i++) {
        if(isArmstrong(i))
          cout << i << endl;
    }
    return 0;
}