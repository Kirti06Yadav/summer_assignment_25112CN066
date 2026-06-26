#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variables to store account holder information
    string name, accountNumber, accountType;

    // Variables for balance and transactions
    double balance = 0.0;
    double deposit, withdraw;

    // Variable to store user's menu choice
    int choice;

    // -------------------- ACCOUNT CREATION --------------------

    cout << "=====================================\n";
    cout << "        ATM SIMULATION SYSTEM\n";
    cout << "=====================================\n";

    // Taking account holder details
    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    getline(cin, accountNumber);

    cout << "Enter Account Type (Saving/Current): ";
    getline(cin, accountType);

    // -------------------- MAIN MENU --------------------

    do
    {
        cout << "\n=====================================\n";
        cout << "            ATM MENU\n";
        cout << "=====================================\n";
        cout << "1. Show Account Information\n";
        cout << "2. Deposit Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Cancel Transaction (Exit)\n";
        cout << "=====================================\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            // ----------- Display Account Information -----------

            case 1:
                cout << "\n------ Account Information ------\n";
                cout << "Name           : " << name << endl;
                cout << "Account Number : " << accountNumber << endl;
                cout << "Account Type   : " << accountType << endl;
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            // ----------- Deposit Money -----------

            case 2:
                cout << "\nEnter Amount to Deposit: Rs. ";
                cin >> deposit;

                // Check whether entered amount is valid
                if(deposit > 0)
                {
                    balance = balance + deposit;

                    cout << "Amount Deposited Successfully.\n";
                    cout << "Available Balance: Rs. " << balance << endl;
                }
                else
                {
                    cout << "Invalid Deposit Amount!\n";
                }
                break;

            // ----------- Check Balance -----------

            case 3:
                cout << "\nCurrent Balance: Rs. " << balance << endl;
                break;

            // ----------- Withdraw Money -----------

            case 4:
                cout << "\nEnter Amount to Withdraw: Rs. ";
                cin >> withdraw;

                // Check if amount is valid
                if(withdraw <= 0)
                {
                    cout << "Invalid Withdrawal Amount!\n";
                }
                // Check whether sufficient balance is available
                else if(withdraw > balance)
                {
                    cout << "Insufficient Balance!\n";
                }
                else
                {
                    balance = balance - withdraw;

                    cout << "Withdrawal Successful.\n";
                    cout << "Available Balance: Rs. " << balance << endl;
                }
                break;

            // ----------- Exit ATM -----------

            case 5:
                cout << "\nTransaction Cancelled.\n";
                cout << "Thank You for Using Our ATM!\n";
                break;

            // ----------- Invalid Choice -----------

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while(choice != 5);

    return 0;
}