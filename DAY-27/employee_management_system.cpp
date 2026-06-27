#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Class to store employee details
class Employee
{
public:
    int id;
    string name;
    string post;
    float salary;

    // Constructor to initialize employee details
    Employee(int empId, string empName, string empPost, float empSalary)
    {
        id = empId;
        name = empName;
        post = empPost;
        salary = empSalary;
    }
};

// Vector to store all employee records
vector<Employee> employees;

// Function to add a new employee
void addEmployee()
{
    int id;
    string name, post;
    float salary;

    cout << "\nEnter Employee ID: ";
    cin >> id;

    // Ignore newline left in input buffer
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Employee Post: ";
    getline(cin, post);

    cout << "Enter Employee Salary: ";
    cin >> salary;

    // Create employee object and add to vector
    employees.push_back(Employee(id, name, post, salary));

    cout << "\nEmployee Added Successfully!\n";
}

// Function to remove an employee using Employee ID
void removeEmployee()
{
    int id;
    cout << "\nEnter Employee ID to Remove: ";
    cin >> id;

    bool found = false;

    // Search employee in vector
    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].id == id)
        {
            // Remove employee from vector
            employees.erase(employees.begin() + i);
            cout << "Employee Removed Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Employee Not Found!\n";
    }
}

// Function to promote employee
void promoteEmployee()
{
    int id;
    string newPost;
    float increment;

    cout << "\nEnter Employee ID to Promote: ";
    cin >> id;

    cin.ignore();

    bool found = false;

    // Search employee
    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].id == id)
        {
            cout << "Enter New Post: ";
            getline(cin, newPost);

            cout << "Enter Salary Increment: ";
            cin >> increment;

            // Update employee details
            employees[i].post = newPost;
            employees[i].salary += increment;

            cout << "Employee Promoted Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Employee Not Found!\n";
    }
}

// Function to display all employees
void displayEmployees()
{
    if (employees.empty())
    {
        cout << "\nNo Employees Available.\n";
        return;
    }

    cout << "\n========== Employee List ==========\n";

    // Display details of every employee
    for (int i = 0; i < employees.size(); i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID     : " << employees[i].id << endl;
        cout << "Employee Name   : " << employees[i].name << endl;
        cout << "Employee Post   : " << employees[i].post << endl;
        cout << "Employee Salary : " << employees[i].salary << endl;
    }
}

// Main Function
int main()
{
    int choice;

    do
    {
        // Display menu
        cout << "\n========== Employee Management System ==========\n";
        cout << "1. Add Employee\n";
        cout << "2. Remove Employee\n";
        cout << "3. Promote Employee\n";
        cout << "4. Display Employees\n";
        cout << "5. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        // Perform operation according to user choice
        switch (choice)
        {
        case 1:
            addEmployee();
            break;

        case 2:
            removeEmployee();
            break;

        case 3:
            promoteEmployee();
            break;

        case 4:
            displayEmployees();
            break;

        case 5:
            cout << "\nThank You for Using Employee Management System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}