#include <iostream>
using namespace std;

// Function to insert an element
void insertElement(int arr[], int &n)
{
    if (n == 100)
    {
        cout << "Array is full!\n";
        return;
    }

    int element;
    cout << "Enter element to insert: ";
    cin >> element;

    arr[n] = element;
    n++;

    cout << "Element inserted successfully.\n";
}

// Function to delete an element
void deleteElement(int arr[], int &n)
{
    if (n == 0)
    {
        cout << "Array is empty!\n";
        return;
    }

    int element, pos = -1;

    cout << "Enter element to delete: ";
    cin >> element;

    // Search for the element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        cout << "Element not found.\n";
    }
    else
    {
        // Shift elements to the left
        for (int i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;
        cout << "Element deleted successfully.\n";
    }
}

// Function to search an element
void searchElement(int arr[], int n)
{
    if (n == 0)
    {
        cout << "Array is empty!\n";
        return;
    }

    int element;
    cout << "Enter element to search: ";
    cin >> element;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            cout << "Element found at position " << i + 1 << ".\n";
            return;
        }
    }

    cout << "Element not found.\n";
}

// Function to display the array
void displayArray(int arr[], int n)
{
    if (n == 0)
    {
        cout << "Array is empty!\n";
        return;
    }

    cout << "Array Elements: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Function to find maximum and minimum elements
void findMaxMin(int arr[], int n)
{
    if (n == 0)
    {
        cout << "Array is empty!\n";
        return;
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Maximum Element = " << max << endl;
    cout << "Minimum Element = " << min << endl;
}

// Main function
int main()
{
    int arr[100];
    int n = 0;
    int choice;

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element\n";
        cout << "3. Search Element\n";
        cout << "4. Display Array\n";
        cout << "5. Find Maximum & Minimum\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insertElement(arr, n);
            break;

        case 2:
            deleteElement(arr, n);
            break;

        case 3:
            searchElement(arr, n);
            break;

        case 4:
            displayArray(arr, n);
            break;

        case 5:
            findMaxMin(arr, n);
            break;

        case 6:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}