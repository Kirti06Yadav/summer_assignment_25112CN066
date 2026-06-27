#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Maximum number of employees
const int MAX = 100;

// Employee Structure
struct Employee
{
    int id;
    string name;
    string department;

    float basicSalary;
    float hra;
    float da;
    float allowance;
    float deduction;
    float netSalary;
};

// Array to store employee records
Employee emp[MAX];

// Variable to store total employees
int countEmp = 0;

//-------------------------------------------------------
// Function to calculate employee salary
//-------------------------------------------------------
void calculateSalary(Employee &e)
{
    // HRA = 20% of Basic Salary
    e.hra = e.basicSalary * 0.20;

    // DA = 10% of Basic Salary
    e.da = e.basicSalary * 0.10;

    // Net Salary Formula
    e.netSalary = e.basicSalary + e.hra + e.da + e.allowance - e.deduction;
}

//-------------------------------------------------------
// Function to Add Employee
//-------------------------------------------------------
void addEmployee()
{
    if (countEmp >= MAX)
    {
        cout << "\nEmployee Database Full!\n";
        return;
    }

    cout << "\nEnter Employee ID : ";
    cin >> emp[countEmp].id;

    cin.ignore();

    cout << "Enter Employee Name : ";
    getline(cin, emp[countEmp].name);

    cout << "Enter Department : ";
    getline(cin, emp[countEmp].department);

    cout << "Enter Basic Salary : ";
    cin >> emp[countEmp].basicSalary;

    cout << "Enter Allowances : ";
    cin >> emp[countEmp].allowance;

    cout << "Enter Deductions : ";
    cin >> emp[countEmp].deduction;

    // Calculate salary automatically
    calculateSalary(emp[countEmp]);

    countEmp++;

    cout << "\nEmployee Added Successfully.\n";
}

//-------------------------------------------------------
// Function to Display All Employees
//-------------------------------------------------------
void displayEmployees()
{
    if (countEmp == 0)
    {
        cout << "\nNo Employee Record Found.\n";
        return;
    }

    cout << "\n========= Employee Details =========\n";

    for (int i = 0; i < countEmp; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "---------------------------------\n";
        cout << "Employee ID   : " << emp[i].id << endl;
        cout << "Name          : " << emp[i].name << endl;
        cout << "Department    : " << emp[i].department << endl;
        cout << "Basic Salary  : " << emp[i].basicSalary << endl;
        cout << "HRA           : " << emp[i].hra << endl;
        cout << "DA            : " << emp[i].da << endl;
        cout << "Allowance     : " << emp[i].allowance << endl;
        cout << "Deduction     : " << emp[i].deduction << endl;
        cout << "Net Salary    : " << emp[i].netSalary << endl;
    }
}

//-------------------------------------------------------
// Function to Search Employee
//-------------------------------------------------------
void searchEmployee()
{
    int choice;

    cout << "\nSearch By";
    cout << "\n1. Employee ID";
    cout << "\n2. Employee Name";
    cout << "\nEnter Choice : ";
    cin >> choice;

    if (choice == 1)
    {
        int id;
        cout << "Enter Employee ID : ";
        cin >> id;

        for (int i = 0; i < countEmp; i++)
        {
            if (emp[i].id == id)
            {
                cout << "\nEmployee Found\n";
                cout << "Name : " << emp[i].name << endl;
                cout << "Department : " << emp[i].department << endl;
                cout << "Net Salary : " << emp[i].netSalary << endl;
                return;
            }
        }
    }
    else if (choice == 2)
    {
        string name;

        cin.ignore();

        cout << "Enter Employee Name : ";
        getline(cin, name);

        for (int i = 0; i < countEmp; i++)
        {
            if (emp[i].name == name)
            {
                cout << "\nEmployee Found\n";
                cout << "Employee ID : " << emp[i].id << endl;
                cout << "Department : " << emp[i].department << endl;
                cout << "Net Salary : " << emp[i].netSalary << endl;
                return;
            }
        }
    }

    cout << "\nEmployee Not Found.\n";
}

//-------------------------------------------------------
// Function to Update Employee
//-------------------------------------------------------
void updateEmployee()
{
    int id;

    cout << "\nEnter Employee ID : ";
    cin >> id;

    for (int i = 0; i < countEmp; i++)
    {
        if (emp[i].id == id)
        {
            cin.ignore();

            cout << "Enter New Name : ";
            getline(cin, emp[i].name);

            cout << "Enter New Department : ";
            getline(cin, emp[i].department);

            cout << "Enter New Basic Salary : ";
            cin >> emp[i].basicSalary;

            cout << "Enter New Allowance : ";
            cin >> emp[i].allowance;

            cout << "Enter New Deduction : ";
            cin >> emp[i].deduction;

            // Recalculate salary
            calculateSalary(emp[i]);

            cout << "\nEmployee Updated Successfully.\n";
            return;
        }
    }

    cout << "\nEmployee Not Found.\n";
}

//-------------------------------------------------------
// Function to Delete Employee
//-------------------------------------------------------
void deleteEmployee()
{
    int id;

    cout << "\nEnter Employee ID : ";
    cin >> id;

    for (int i = 0; i < countEmp; i++)
    {
        if (emp[i].id == id)
        {
            // Shift remaining employees
            for (int j = i; j < countEmp - 1; j++)
            {
                emp[j] = emp[j + 1];
            }

            countEmp--;

            cout << "\nEmployee Deleted Successfully.\n";
            return;
        }
    }

    cout << "\nEmployee Not Found.\n";
}

//-------------------------------------------------------
// Function to Generate Salary Slip
//-------------------------------------------------------
void salarySlip()
{
    int id;

    cout << "\nEnter Employee ID : ";
    cin >> id;

    for (int i = 0; i < countEmp; i++)
    {
        if (emp[i].id == id)
        {
            cout << "\n========== Salary Slip ==========\n";
            cout << "Employee ID : " << emp[i].id << endl;
            cout << "Name        : " << emp[i].name << endl;
            cout << "Department  : " << emp[i].department << endl;

            cout << fixed << setprecision(2);

            cout << "Basic Salary : " << emp[i].basicSalary << endl;
            cout << "HRA (20%)    : " << emp[i].hra << endl;
            cout << "DA (10%)     : " << emp[i].da << endl;
            cout << "Allowance    : " << emp[i].allowance << endl;
            cout << "Deduction    : " << emp[i].deduction << endl;

            cout << "------------------------------\n";
            cout << "Net Salary   : " << emp[i].netSalary << endl;
            cout << "==============================\n";

            return;
        }
    }

    cout << "\nEmployee Not Found.\n";
}

//-------------------------------------------------------
// Function to Display Total Salary Expense
//-------------------------------------------------------
void totalExpense()
{
    float total = 0;

    for (int i = 0; i < countEmp; i++)
    {
        total += emp[i].netSalary;
    }

    cout << "\nTotal Salary Expense = " << total << endl;
}

//-------------------------------------------------------
// Main Function
//-------------------------------------------------------
int main()
{
    int choice;

    do
    {
        cout << "\n==============================";
        cout << "\n SALARY MANAGEMENT SYSTEM";
        cout << "\n==============================";

        cout << "\n1. Add Employee";
        cout << "\n2. Display All Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee Details";
        cout << "\n5. Delete Employee";
        cout << "\n6. Generate Salary Slip";
        cout << "\n7. Display Total Salary Expense";
        cout << "\n8. Exit";

        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addEmployee();
            break;

        case 2:
            displayEmployees();
            break;

        case 3:
            searchEmployee();
            break;

        case 4:
            updateEmployee();
            break;

        case 5:
            deleteEmployee();
            break;

        case 6:
            salarySlip();
            break;

        case 7:
            totalExpense();
            break;

        case 8:
            cout << "\nThank You for using our Salary Management System.\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 8);

    return 0;
}