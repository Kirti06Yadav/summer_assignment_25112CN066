#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to store contact information
struct Contact
{
    string name;
    string phone;
    string email;
};

// Function to add a new contact
void addContact(vector<Contact> &contacts)
{
    Contact c;

    // Clear input buffer
    cin.ignore();

    cout << "\nEnter Name: ";
    getline(cin, c.name);

    cout << "Enter Phone Number: ";
    getline(cin, c.phone);

    cout << "Enter Email: ";
    getline(cin, c.email);

    // Check if phone number already exists
    for (const auto &contact : contacts)
    {
        if (contact.phone == c.phone)
        {
            cout << "\nA contact with this phone number already exists!\n";
            return;
        }
    }

    // Add contact to the vector
    contacts.push_back(c);

    cout << "\nContact added successfully!\n";
}

// Function to display all contacts
void viewContacts(const vector<Contact> &contacts)
{
    if (contacts.empty())
    {
        cout << "\nNo contacts available.\n";
        return;
    }

    cout << "\n========== Contact List ==========\n";

    for (int i = 0; i < contacts.size(); i++)
    {
        cout << "\nContact " << i + 1 << endl;
        cout << "Name  : " << contacts[i].name << endl;
        cout << "Phone : " << contacts[i].phone << endl;
        cout << "Email : " << contacts[i].email << endl;
    }
}

// Function to search contact by phone number
void searchContact(const vector<Contact> &contacts)
{
    string phone;
    bool found = false;

    cin.ignore();

    cout << "\nEnter Phone Number to Search: ";
    getline(cin, phone);

    for (const auto &contact : contacts)
    {
        if (contact.phone == phone)
        {
            cout << "\nContact Found!\n";
            cout << "Name  : " << contact.name << endl;
            cout << "Phone : " << contact.phone << endl;
            cout << "Email : " << contact.email << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nContact not found.\n";
    }
}

// Function to delete contact by phone number
void deleteContact(vector<Contact> &contacts)
{
    string phone;
    bool found = false;

    cin.ignore();

    cout << "\nEnter Phone Number to Delete: ";
    getline(cin, phone);

    for (auto it = contacts.begin(); it != contacts.end(); it++)
    {
        if (it->phone == phone)
        {
            contacts.erase(it);

            cout << "\nContact deleted successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nContact not found.\n";
    }
}

// Main function
int main()
{
    vector<Contact> contacts;
    int choice;

    do
    {
        cout << "\n===================================";
        cout << "\n     CONTACT MANAGEMENT SYSTEM";
        cout << "\n===================================\n";

        cout << "1. Add New Contact\n";
        cout << "2. View All Contacts\n";
        cout << "3. Search Contact by Phone Number\n";
        cout << "4. Delete Contact by Phone Number\n";
        cout << "5. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addContact(contacts);
            break;

        case 2:
            viewContacts(contacts);
            break;

        case 3:
            searchContact(contacts);
            break;

        case 4:
            deleteContact(contacts);
            break;

        case 5:
            cout << "\nThank you for using the Contact Management System!\n";
            break;

        default:
            cout << "\nInvalid choice! Please enter a valid option.\n";
        }

    } while (choice != 5);

    return 0;
}