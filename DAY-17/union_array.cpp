#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "ENTER SIZE OF FIRST ARRAY: ";
    cin >> n1;

    int arr1[n1];
    cout << "ENTER ELEMENTS OF FIRST ARRAY: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "ENTER SIZE OF SECOND ARRAY: ";
    cin >> n2;

    int arr2[n2];
    cout << "ENTER ELEMENTS OF SECOND ARRAY: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int unionArr[n1 + n2];
    int k = 0;

    // Add unique elements from first array
    for (int i = 0; i < n1; i++) {
        bool found = false;

        for (int j = 0; j < k; j++) {
            if (arr1[i] == unionArr[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            unionArr[k++] = arr1[i];
        }
    }

    // Add unique elements from second array
    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < k; j++) {
            if (arr2[i] == unionArr[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            unionArr[k++] = arr2[i];
        }
    }

    cout << "UNION OF ARRAY: ";
    for (int i = 0; i < k; i++) {
        cout << unionArr[i] << " ";
    }

    return 0;
}