#include <iostream>
#include <iomanip>
using namespace std;

// Maximum number of expenses
const int MAX = 100;

// Arrays to store expense details
string category[MAX];
string date[MAX];      // Format: DD/MM/YYYY
string comment[MAX];
float amount[MAX];

int countExpense = 0;

// Budget for different categories
float foodBudget = 0;
float travelBudget = 0;
float shoppingBudget = 0;
float billsBudget = 0;
float otherBudget = 0;

//------------------------------------------------------
// Function to set budgets
//------------------------------------------------------
void setBudget()
{
    cout << "\n===== SET CATEGORY BUDGET =====\n";

    cout << "Food Budget: ";
    cin >> foodBudget;

    cout << "Travel Budget: ";
    cin >> travelBudget;

    cout << "Shopping Budget: ";
    cin >> shoppingBudget;

    cout << "Bills Budget: ";
    cin >> billsBudget;

    cout << "Other Budget: ";
    cin >> otherBudget;

    cout << "\nBudgets Saved Successfully!\n";
}

//------------------------------------------------------
// Function to add new expense
//------------------------------------------------------
void addExpense()
{
    if(countExpense >= MAX)
    {
        cout << "Expense List Full!\n";
        return;
    }

    cout << "\n===== ADD EXPENSE =====\n";

    cout << "Enter Category (Food/Travel/Shopping/Bills/Other): ";
    cin >> category[countExpense];

    cout << "Enter Amount: ";
    cin >> amount[countExpense];

    cout << "Enter Date (DD/MM/YYYY): ";
    cin >> date[countExpense];

    cin.ignore();

    cout << "Enter Comment: ";
    getline(cin, comment[countExpense]);

    countExpense++;

    cout << "\nExpense Added Successfully!\n";
}

//------------------------------------------------------
// Function to edit expense
//------------------------------------------------------
void editExpense()
{
    if(countExpense == 0)
    {
        cout << "No Expenses Available!\n";
        return;
    }

    int index;

    cout << "\nEnter Expense Number (1-" << countExpense << "): ";
    cin >> index;

    if(index < 1 || index > countExpense)
    {
        cout << "Invalid Expense Number!\n";
        return;
    }

    index--;

    cout << "\nEnter New Category: ";
    cin >> category[index];

    cout << "Enter New Amount: ";
    cin >> amount[index];

    cout << "Enter New Date: ";
    cin >> date[index];

    cin.ignore();

    cout << "Enter New Comment: ";
    getline(cin, comment[index]);

    cout << "\nExpense Updated Successfully!\n";
}

//------------------------------------------------------
// Function to display all expenses
//------------------------------------------------------
void displayExpenses()
{
    if(countExpense == 0)
    {
        cout << "No Expense Records!\n";
        return;
    }

    cout << "\n============================ EXPENSE LIST ============================\n";

    cout << left << setw(5) << "No"
         << setw(15) << "Category"
         << setw(12) << "Amount"
         << setw(15) << "Date"
         << "Comment\n";

    for(int i=0;i<countExpense;i++)
    {
        cout << left << setw(5) << i+1
             << setw(15) << category[i]
             << setw(12) << amount[i]
             << setw(15) << date[i]
             << comment[i] << endl;
    }
}

//------------------------------------------------------
// Category Wise Report
//------------------------------------------------------
void categoryReport()
{
    float food=0, travel=0, shopping=0, bills=0, other=0;

    for(int i=0;i<countExpense;i++)
    {
        if(category[i]=="Food")
            food += amount[i];

        else if(category[i]=="Travel")
            travel += amount[i];

        else if(category[i]=="Shopping")
            shopping += amount[i];

        else if(category[i]=="Bills")
            bills += amount[i];

        else
            other += amount[i];
    }

    cout << "\n========== CATEGORY REPORT ==========\n";

    cout << "Food      : " << food << endl;
    cout << "Travel    : " << travel << endl;
    cout << "Shopping  : " << shopping << endl;
    cout << "Bills     : " << bills << endl;
    cout << "Other     : " << other << endl;

    cout << "\n========== BUDGET STATUS ==========\n";

    cout << "Food Remaining      : " << foodBudget-food << endl;
    cout << "Travel Remaining    : " << travelBudget-travel << endl;
    cout << "Shopping Remaining  : " << shoppingBudget-shopping << endl;
    cout << "Bills Remaining     : " << billsBudget-bills << endl;
    cout << "Other Remaining     : " << otherBudget-other << endl;
}

//------------------------------------------------------
// Daily Report
//------------------------------------------------------
void dailyReport()
{
    string searchDate;
    float total = 0;

    cout << "\nEnter Date (DD/MM/YYYY): ";
    cin >> searchDate;

    cout << "\nExpenses on " << searchDate << endl;

    for(int i=0;i<countExpense;i++)
    {
        if(date[i]==searchDate)
        {
            cout << category[i] << "  "
                 << amount[i] << "  "
                 << comment[i] << endl;

            total += amount[i];
        }
    }

    cout << "Total = " << total << endl;
}

//------------------------------------------------------
// Monthly Report
//------------------------------------------------------
void monthlyReport()
{
    string month;
    float total = 0;

    cout << "\nEnter Month & Year (MM/YYYY): ";
    cin >> month;

    cout << "\nMonthly Report\n";

    for(int i=0;i<countExpense;i++)
    {
        // Extract MM/YYYY from DD/MM/YYYY
        string temp = date[i].substr(3);

        if(temp==month)
        {
            cout << category[i]
                 << " "
                 << amount[i]
                 << " "
                 << date[i]
                 << endl;

            total += amount[i];
        }
    }

    cout << "\nTotal Monthly Expense = " << total << endl;
}

//------------------------------------------------------
// Summary Page
//------------------------------------------------------
void summary()
{
    float total=0;

    for(int i=0;i<countExpense;i++)
        total += amount[i];

    cout << "\n============= SUMMARY =============\n";

    cout << "Total Expenses : " << countExpense << endl;
    cout << "Total Amount   : " << total << endl;

    categoryReport();
}

//------------------------------------------------------
// Main Function
//------------------------------------------------------
int main()
{
    int choice;

    do
    {
        cout << "\n\n=====================================\n";
        cout << "      EXPENSE TRACKER SYSTEM\n";
        cout << "=====================================\n";

        cout << "1. Set Budget\n";
        cout << "2. Add Expense\n";
        cout << "3. Edit Expense\n";
        cout << "4. Display Expenses\n";
        cout << "5. Category Wise Report\n";
        cout << "6. Daily Report\n";
        cout << "7. Monthly Report\n";
        cout << "8. Summary Page\n";
        cout << "9. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                setBudget();
                break;

            case 2:
                addExpense();
                break;

            case 3:
                editExpense();
                break;

            case 4:
                displayExpenses();
                break;

            case 5:
                categoryReport();
                break;

            case 6:
                dailyReport();
                break;

            case 7:
                monthlyReport();
                break;

            case 8:
                summary();
                break;

            case 9:
                cout << "\nThank You for using Expense Tracker!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    }while(choice!=9);

    return 0;
}