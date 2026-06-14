#include <iostream>
using namespace std;

int main() {
    int arr[100], n;  //array and its size
    int sum = 0;
    float average;

    cout << "ENTER NUMBER OF ELEMENTS: ";
    cin >> n;

    cout << "ENTER " << n << " ELEMENTS:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   //read each element
        sum += arr[i];   //add element to sum
    }

    average = (float)sum / n;   //calculate average

    cout << "SUM = " << sum << endl;
    cout << "AVERAGE = " << average << endl;

    return 0;
}