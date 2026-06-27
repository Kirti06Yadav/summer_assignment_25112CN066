#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Structure to store student information
struct Student
{
    int rollNo;
    string name;

    // Marks of five subjects
    float marks[5];

    float total;
    float percentage;
    char grade;
};

// Vector to store multiple student records
vector<Student> students;

//------------------------------------------------------------
// Function to calculate total, percentage and grade
//------------------------------------------------------------
void calculateResult(Student &s)
{
    s.total = 0;

    // Calculate total marks
    for (int i = 0; i < 5; i++)
    {
        s.total += s.marks[i];
    }

    // Calculate percentage
    s.percentage = s.total / 5;

    // Assign grade using conditional statements
    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 80)
        s.grade = 'B';
    else if (s.percentage >= 70)
        s.grade = 'C';
    else if (s.percentage >= 60)
        s.grade = 'D';
    else
        s.grade = 'F';
}

//------------------------------------------------------------
// Function to add a new student
//------------------------------------------------------------
void addStudent()
{
    Student s;

    cout << "\nEnter Roll Number : ";
    cin >> s.rollNo;

    cin.ignore();

    cout << "Enter Student Name : ";
    getline(cin, s.name);

    cout << "\nEnter marks of 5 subjects\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " : ";
        cin >> s.marks[i];
    }

    // Calculate result
    calculateResult(s);

    // Store record
    students.push_back(s);

    cout << "\nRecord Added Successfully!\n";
}

//------------------------------------------------------------
// Function to display all records
//------------------------------------------------------------
void displayStudents()
{
    if (students.empty())
    {
        cout << "\nNo Records Found.\n";
        return;
    }

    cout << "\n========== STUDENT MARKSHEET ==========\n";

    for (int i = 0; i < students.size(); i++)
    {
        cout << "\n----------------------------------------\n";
        cout << "Roll Number : " << students[i].rollNo << endl;
        cout << "Name        : " << students[i].name << endl;

        cout << "\nSubject Marks\n";

        for (int j = 0; j < 5; j++)
        {
            cout << "Subject " << j + 1 << " : "
                 << students[i].marks[j] << endl;
        }

        cout << fixed << setprecision(2);

        cout << "\nTotal Marks : " << students[i].total << endl;
        cout << "Percentage : " << students[i].percentage << "%" << endl;
        cout << "Grade      : " << students[i].grade << endl;
    }
}

//------------------------------------------------------------
// Function to update student record
//------------------------------------------------------------
void updateStudent()
{
    int roll;
    bool found = false;

    cout << "\nEnter Roll Number to Update : ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].rollNo == roll)
        {
            cin.ignore();

            cout << "Enter New Name : ";
            getline(cin, students[i].name);

            cout << "\nEnter New Marks\n";

            for (int j = 0; j < 5; j++)
            {
                cout << "Subject " << j + 1 << " : ";
                cin >> students[i].marks[j];
            }

            // Recalculate result
            calculateResult(students[i]);

            cout << "\nRecord Updated Successfully!\n";

            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nRecord Not Found.\n";
}

//------------------------------------------------------------
// Function to delete student record
//------------------------------------------------------------
void deleteStudent()
{
    int roll;
    bool found = false;

    cout << "\nEnter Roll Number to Delete : ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].rollNo == roll)
        {
            students.erase(students.begin() + i);

            cout << "\nRecord Deleted Successfully!\n";

            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nRecord Not Found.\n";
}

//------------------------------------------------------------
// Main Function
//------------------------------------------------------------
int main()
{
    int choice;

    do
    {
        cout << "\n========================================";
        cout << "\n     MARKSHEET GENERATION SYSTEM";
        cout << "\n========================================";

        cout << "\n1. Enter Student Details";
        cout << "\n2. Display Marksheet";
        cout << "\n3. Update Student Record";
        cout << "\n4. Delete Student Record";
        cout << "\n5. Exit";

        cout << "\n\nEnter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            updateStudent();
            break;

        case 4:
            deleteStudent();
            break;

        case 5:
            cout << "\nThank You for Using the System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}