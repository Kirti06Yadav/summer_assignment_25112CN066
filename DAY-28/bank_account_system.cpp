#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to store bank account details
struct BankAccount
{
    string name;
    int accountNumber;
    string accountType;
    double balance;
    bool active; // To check whether account is active or closed
};

// Vector to store all bank accounts
vector<BankAccount> accounts;

// Function to find account by account number
int findAccount(int accNo)
{
    for (int i = 0; i < accounts.size(); i++)
    {
        if (accounts[i].accountNumber == accNo && accounts[i].active)
        {
            return i;
        }
    }
    return -1; // Account not found
}

// Function to create a new account
void createAccount()
{
    BankAccount acc;

    cout << "\nEnter Customer Name: ";
    cin.ignore();
    getline(cin, acc.name);

    cout << "Enter Account Number: ";
    cin >> acc.accountNumber;

    // Check if account number already exists
    if (findAccount(acc.accountNumber) != -1)
    {
        cout << "Account Number already exists!\n";
        return;
    }

    cout << "Enter Account Type (Savings/Current): ";
    cin >> acc.accountType;

    cout << "Enter Initial Deposit: ";
    cin >> acc.balance;

    acc.active = true;

    accounts.push_back(acc);

    cout << "Account Created Successfully!\n";
}

// Function to deposit money
void depositMoney()
{
    int accNo;
    double amount;

    cout << "\nEnter Account Number: ";
    cin >> accNo;

    int index = findAccount(accNo);

    if (index == -1)
    {
        cout << "Account Not Found!\n";
        return;
    }

    cout << "Enter Amount to Deposit: ";
    cin >> amount;

    accounts[index].balance += amount;

    cout << "Deposit Successful.\n";
    cout << "Updated Balance: " << accounts[index].balance << endl;
}

// Function to withdraw money
void withdrawMoney()
{
    int accNo;
    double amount;

    cout << "\nEnter Account Number: ";
    cin >> accNo;

    int index = findAccount(accNo);

    if (index == -1)
    {
        cout << "Account Not Found!\n";
        return;
    }

    cout << "Enter Amount to Withdraw: ";
    cin >> amount;

    if (amount > accounts[index].balance)
    {
        cout << "Insufficient Balance!\n";
    }
    else
    {
        accounts[index].balance -= amount;
        cout << "Withdrawal Successful.\n";
        cout << "Remaining Balance: " << accounts[index].balance << endl;
    }
}

// Function to check account balance
void checkBalance()
{
    int accNo;

    cout << "\nEnter Account Number: ";
    cin >> accNo;

    int index = findAccount(accNo);

    if (index == -1)
    {
        cout << "Account Not Found!\n";
        return;
    }

    cout << "\n------ Account Details ------\n";
    cout << "Customer Name : " << accounts[index].name << endl;
    cout << "Account Number: " << accounts[index].accountNumber << endl;
    cout << "Account Type  : " << accounts[index].accountType << endl;
    cout << "Balance       : " << accounts[index].balance << endl;
}

// Function to transfer money
void transferFunds()
{
    int senderAcc, receiverAcc;
    double amount;

    cout << "\nEnter Sender Account Number: ";
    cin >> senderAcc;

    cout << "Enter Receiver Account Number: ";
    cin >> receiverAcc;

    int sender = findAccount(senderAcc);
    int receiver = findAccount(receiverAcc);

    if (sender == -1 || receiver == -1)
    {
        cout << "One or Both Accounts Not Found!\n";
        return;
    }

    cout << "Enter Amount to Transfer: ";
    cin >> amount;

    if (accounts[sender].balance < amount)
    {
        cout << "Insufficient Balance!\n";
    }
    else
    {
        accounts[sender].balance -= amount;
        accounts[receiver].balance += amount;

        cout << "Transfer Successful!\n";
    }
}

// Function to close accoumt
void closeAccount()
{
    int accNo;

    cout << "\nEnter Account Number to Close: ";
    cin >> accNo;

    int index = findAccount(accNo);

    if (index == -1)
    {
        cout << "Account Not Found!\n";
        return;
    }

    accounts[index].active = false;

    cout << "Account Closed Successfully.\n";
}

// Main Function
int main()
{
    int choice;

    do
    {
        cout << "\n======================================";
        cout << "\n     BANK ACCOUNT MANAGEMENT SYSTEM";
        cout << "\n======================================";
        cout << "\n1. Create Account";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Check Balance";
        cout << "\n5. Transfer Funds";
        cout << "\n6. Close Account";
        cout << "\n7. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createAccount();
            break;

        case 2:
            depositMoney();
            break;

        case 3:
            withdrawMoney();
            break;

        case 4:
            checkBalance();
            break;

        case 5:
            transferFunds();
            break;

        case 6:
            closeAccount();
            break;

        case 7:
            cout << "\nThank You for Using the Bank Management System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 7);

    return 0;
}