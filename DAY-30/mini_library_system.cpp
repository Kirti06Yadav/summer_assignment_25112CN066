#include <iostream>
#include <string>
using namespace std;

// Maximum number of books that can be stored
const int MAX = 100;

// Structure to store book details
struct Book
{
    int id;
    string title;
    string author;
    bool borrowed; // true if book is borrowed, false otherwise
};

// Array to store books
Book library[MAX];

// Variable to keep track of total books
int totalBooks = 0;

// Function to add a new book
void addBook()
{
    if (totalBooks == MAX)
    {
        cout << "\nLibrary is full! Cannot add more books.\n";
        return;
    }

    cout << "\nEnter Book ID: ";
    cin >> library[totalBooks].id;
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, library[totalBooks].title);

    cout << "Enter Author Name: ";
    getline(cin, library[totalBooks].author);

    // New book is available by default
    library[totalBooks].borrowed = false;

    totalBooks++;

    cout << "\nBook Added Successfully!\n";
}

// Function to display all books
void viewBooks()
{
    if (totalBooks == 0)
    {
        cout << "\nNo books available.\n";
        return;
    }

    cout << "\n========== Library Books ==========\n";

    for (int i = 0; i < totalBooks; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "ID      : " << library[i].id << endl;
        cout << "Title   : " << library[i].title << endl;
        cout << "Author  : " << library[i].author << endl;

        if (library[i].borrowed)
            cout << "Status  : Borrowed\n";
        else
            cout << "Status  : Available\n";
    }
}

// Function to search a book by ID
void searchBook()
{
    int id;
    bool found = false;

    cout << "\nEnter Book ID to Search: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++)
    {
        if (library[i].id == id)
        {
            cout << "\nBook Found!\n";
            cout << "Title  : " << library[i].title << endl;
            cout << "Author : " << library[i].author << endl;

            if (library[i].borrowed)
                cout << "Status : Borrowed\n";
            else
                cout << "Status : Available\n";

            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nBook not found!\n";
}

// Function to borrow a book
void borrowBook()
{
    int id;
    bool found = false;

    cout << "\nEnter Book ID to Borrow: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++)
    {
        if (library[i].id == id)
        {
            found = true;

            if (!library[i].borrowed)
            {
                library[i].borrowed = true;
                cout << "\nBook Borrowed Successfully!\n";
            }
            else
            {
                cout << "\nBook is already borrowed.\n";
            }

            break;
        }
    }

    if (!found)
        cout << "\nBook not found!\n";
}

// Function to return a borrowed book
void returnBook()
{
    int id;
    bool found = false;

    cout << "\nEnter Book ID to Return: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++)
    {
        if (library[i].id == id)
        {
            found = true;

            if (library[i].borrowed)
            {
                library[i].borrowed = false;
                cout << "\nBook Returned Successfully!\n";
            }
            else
            {
                cout << "\nThis book was not borrowed.\n";
            }

            break;
        }
    }

    if (!found)
        cout << "\nBook not found!\n";
}

// Main function
int main()
{
    int choice;

    do
    {
        // Display menu
        cout << "\n===================================";
        cout << "\n     LIBRARY MANAGEMENT SYSTEM";
        cout << "\n==================================";
        cout << "\n1. Add Book";
        cout << "\n2. View All Books";
        cout << "\n3. Search Book";
        cout << "\n4. Borrow Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        // Execute operation based on user choice
        switch (choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                viewBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                borrowBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                cout << "\nThank you for using the Library Management System!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}