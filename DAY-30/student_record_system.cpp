#include <iostream>
#include <string>
using namespace std;

// Maximum number of students
const int MAX = 100;

// Structure to store student details
struct Student
{
    int id;
    string name;
    string studentClass;
    string course;
    string contact;

    int marks[3];     // Marks of 3 subjects
    float average;    // Average marks
};

// Array of students
Student students[MAX];

// Variable to keep track of total students
int totalStudents = 0;

//-----------------------------------------------------------
// Function to calculate average marks
//-----------------------------------------------------------
float calculateAverage(int marks[])
{
    return (marks[0] + marks[1] + marks[2]) / 3.0;
}

//-----------------------------------------------------------
// Function to insert a new student
//-----------------------------------------------------------
void insertStudent()
{
    if (totalStudents == MAX)
    {
        cout << "\nStudent record is full!\n";
        return;
    }

    cout << "\nEnter Student ID: ";
    cin >> students[totalStudents].id;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, students[totalStudents].name);

    cout << "Enter Class: ";
    getline(cin, students[totalStudents].studentClass);

    cout << "Enter Course: ";
    getline(cin, students[totalStudents].course);

    cout << "Enter Contact Number: ";
    getline(cin, students[totalStudents].contact);

    cout << "Enter Marks of 3 Subjects:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> students[totalStudents].marks[i];
    }

    // Calculate average
    students[totalStudents].average =
        calculateAverage(students[totalStudents].marks);

    totalStudents++;

    cout << "\nStudent Added Successfully!\n";
}

//-----------------------------------------------------------
// Function to search student by ID
//-----------------------------------------------------------
void searchStudent()
{
    int id;
    cout << "\nEnter Student ID to Search: ";
    cin >> id;

    bool found = false;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].id == id)
        {
            found = true;

            cout << "\nStudent Found\n";
            cout << "-------------------------\n";
            cout << "ID : " << students[i].id << endl;
            cout << "Name : " << students[i].name << endl;
            cout << "Class : " << students[i].studentClass << endl;
            cout << "Course : " << students[i].course << endl;
            cout << "Contact : " << students[i].contact << endl;

            cout << "Marks : ";
            for (int j = 0; j < 3; j++)
                cout << students[i].marks[j] << " ";

            cout << "\nAverage : " << students[i].average << endl;
            break;
        }
    }

    if (!found)
        cout << "\nStudent Not Found!\n";
}

//-----------------------------------------------------------
// Function to display all students
//-----------------------------------------------------------
void displayStudents()
{
    if (totalStudents == 0)
    {
        cout << "\nNo Records Available!\n";
        return;
    }

    cout << "\n===== Student Records =====\n";

    for (int i = 0; i < totalStudents; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "------------------------\n";

        cout << "ID : " << students[i].id << endl;
        cout << "Name : " << students[i].name << endl;
        cout << "Class : " << students[i].studentClass << endl;
        cout << "Course : " << students[i].course << endl;
        cout << "Contact : " << students[i].contact << endl;

        cout << "Marks : ";
        for (int j = 0; j < 3; j++)
            cout << students[i].marks[j] << " ";

        cout << "\nAverage : " << students[i].average << endl;
    }
}

//-----------------------------------------------------------
// Function to find minimum and maximum marks
//-----------------------------------------------------------
void findMinMax()
{
    if (totalStudents == 0)
    {
        cout << "\nNo Student Records!\n";
        return;
    }

    for (int i = 0; i < totalStudents; i++)
    {
        int min = students[i].marks[0];
        int max = students[i].marks[0];

        for (int j = 1; j < 3; j++)
        {
            if (students[i].marks[j] < min)
                min = students[i].marks[j];

            if (students[i].marks[j] > max)
                max = students[i].marks[j];
        }

        cout << "\nStudent: " << students[i].name;
        cout << "\nMinimum Marks = " << min;
        cout << "\nMaximum Marks = " << max << endl;
    }
}

//-----------------------------------------------------------
// Function to display average marks of each student
//-----------------------------------------------------------
void displayAverage()
{
    if (totalStudents == 0)
    {
        cout << "\nNo Student Records!\n";
        return;
    }

    cout << "\nAverage Marks\n";

    for (int i = 0; i < totalStudents; i++)
    {
        cout << students[i].name
             << " : "
             << students[i].average
             << endl;
    }
}

//-----------------------------------------------------------
// Function to sort students by average marks
//-----------------------------------------------------------
void sortStudents()
{
    if (totalStudents == 0)
    {
        cout << "\nNo Student Records!\n";
        return;
    }

    int choice;

    cout << "\n1. Ascending";
    cout << "\n2. Descending";
    cout << "\nEnter Choice: ";
    cin >> choice;

    for (int i = 0; i < totalStudents - 1; i++)
    {
        for (int j = 0; j < totalStudents - i - 1; j++)
        {
            bool swapNeeded = false;

            if (choice == 1 &&
                students[j].average > students[j + 1].average)
                swapNeeded = true;

            if (choice == 2 &&
                students[j].average < students[j + 1].average)
                swapNeeded = true;

            if (swapNeeded)
            {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    cout << "\nStudents Sorted Successfully!\n";
}

//-----------------------------------------------------------
// Main Function
//-----------------------------------------------------------
int main()
{
    int choice;

    do
    {
        cout << "\n===================================";
        cout << "\n Student Record Management System";
        cout << "\n===================================";
        cout << "\n1. Insert Student";
        cout << "\n2. Search Student by ID";
        cout << "\n3. Display All Students";
        cout << "\n4. Display Average Marks";
        cout << "\n5. Find Min & Max Marks";
        cout << "\n6. Sort by Average Marks";
        cout << "\n7. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insertStudent();
            break;

        case 2:
            searchStudent();
            break;

        case 3:
            displayStudents();
            break;

        case 4:
            displayAverage();
            break;

        case 5:
            findMinMax();
            break;

        case 6:
            sortStudents();
            break;

        case 7:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}