#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to store student details
struct Student
{
    string name;
    string studentClass;
    int admissionNo;
    string contactNo;
    string course;
};

// Vector to store all student records
vector<Student> students;

// Function to add a new student
void addStudent()
{
    Student s;

    cout << "\nEnter Student Name: ";
    cin.ignore();
    getline(cin, s.name);

    cout << "Enter Class: ";
    getline(cin, s.studentClass);

    cout << "Enter Admission Number: ";
    cin >> s.admissionNo;

    cout << "Enter Contact Number: ";
    cin >> s.contactNo;

    cin.ignore();
    cout << "Enter Enrolled Course: ";
    getline(cin, s.course);

    // Add student to vector
    students.push_back(s);

    cout << "\nStudent record added successfully!\n";
}

// Function to display all students
void displayStudents()
{
    if (students.empty())
    {
        cout << "\nNo student records found.\n";
        return;
    }

    cout << "\n===== Student Records =====\n";

    for (int i = 0; i < students.size(); i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name            : " << students[i].name << endl;
        cout << "Class           : " << students[i].studentClass << endl;
        cout << "Admission No    : " << students[i].admissionNo << endl;
        cout << "Contact Number  : " << students[i].contactNo << endl;
        cout << "Course          : " << students[i].course << endl;
    }
}

// Function to search student by admission number
void searchStudent()
{
    int admNo;
    bool found = false;

    cout << "\nEnter Admission Number to Search: ";
    cin >> admNo;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].admissionNo == admNo)
        {
            cout << "\nStudent Found!\n";
            cout << "Name           : " << students[i].name << endl;
            cout << "Class          : " << students[i].studentClass << endl;
            cout << "Admission No   : " << students[i].admissionNo << endl;
            cout << "Contact Number : " << students[i].contactNo << endl;
            cout << "Course         : " << students[i].course << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nStudent record not found.\n";
    }
}

// Function to update student details
void updateStudent()
{
    int admNo;
    bool found = false;

    cout << "\nEnter Admission Number to Update: ";
    cin >> admNo;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].admissionNo == admNo)
        {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, students[i].name);

            cout << "Enter New Class: ";
            getline(cin, students[i].studentClass);

            cout << "Enter New Contact Number: ";
            getline(cin, students[i].contactNo);

            cout << "Enter New Course: ";
            getline(cin, students[i].course);

            cout << "\nStudent record updated successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nStudent record not found.\n";
    }
}

// Function to delete a student record
void deleteStudent()
{
    int admNo;
    bool found = false;

    cout << "\nEnter Admission Number to Delete: ";
    cin >> admNo;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].admissionNo == admNo)
        {
            students.erase(students.begin() + i);

            cout << "\nStudent record deleted successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nStudent record not found.\n";
    }
}

// Main function
int main()
{
    int choice;

    do
    {
        // Display menu
        cout << "\n========== Student Record Management System ==========\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Student Records\n";
        cout << "3. Search Student Record\n";
        cout << "4. Update Student Record\n";
        cout << "5. Delete Student Record\n";
        cout << "6. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        // Perform operation based on user's choice
        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "\nThank you for using the Student Record Management System.\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}