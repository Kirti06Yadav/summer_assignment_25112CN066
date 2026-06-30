#include <iostream>
#include <cmath>    // For pow() and sqrt()
using namespace std;

int main()
{
    int choice;
    double num1, num2, result;

    do
    {
        // Display calculator menu
        cout << "\n===== MENU DRIVEN CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exponentiation (Power)\n";
        cout << "7. Square Root\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                // Addition
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result = " << result << endl;
                break;

            case 2:
                // Subtraction
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result = " << result << endl;
                break;

            case 3:
                // Multiplication
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result = " << result << endl;
                break;

            case 4:
                // Division with error handling
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                if (num2 != 0)
                {
                    result = num1 / num2;
                    cout << "Result = " << result << endl;
                }
                else
                {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;

            case 5:
            {
                // Modulus operation (only for integers)
                int a, b;
                cout << "Enter two integers: ";
                cin >> a >> b;

                if (b != 0)
                {
                    cout << "Result = " << a % b << endl;
                }
                else
                {
                    cout << "Error! Modulus by zero is not allowed." << endl;
                }
                break;
            }

            case 6:
                // Exponentiation
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                result = pow(num1, num2);
                cout << "Result = " << result << endl;
                break;

            case 7:
                // Square Root
                cout << "Enter a number: ";
                cin >> num1;

                if (num1 >= 0)
                {
                    result = sqrt(num1);
                    cout << "Square Root = " << result << endl;
                }
                else
                {
                    cout << "Error! Square root of a negative number is not possible." << endl;
                }
                break;

            case 8:
                // Exit program
                cout << "Thank you for using the calculator!" << endl;
                break;

            default:
                // Invalid choice
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 8);

    return 0;
}