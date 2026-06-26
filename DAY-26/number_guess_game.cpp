#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;

// Function to play the game
void playGame(int maxNumber, int chances)
{
    // Generate a random number between 1 and maxNumber
    int secretNumber = rand() % maxNumber + 1;
    int guess;

    cout << "\n======================================" << endl;
    cout << " Guess the number between 1 and " << maxNumber << endl;
    cout << " You have " << chances << " chances." << endl;
    cout << "======================================\n";

    // Loop until all chances are used
    for (int i = 1; i <= chances; i++)
    {
        cout << "Chance " << i << "/" << chances << endl;
        cout << "Enter your guess: ";
        cin >> guess;

        // Check the user's guess
        if (guess == secretNumber)
        {
            cout << "\n Congratulations! You guessed the correct number.\n";
            return; // Exit the function if guessed correctly
        }
        else if (guess < secretNumber)
        {
            cout << " Too Low!\n";
        }
        else
        {
            cout << " Too High!\n";
        }

        // Show remaining chances
        if (i != chances)
        {
            cout << "Remaining Chances: " << chances - i << "\n\n";
        }
    }

    // If the user fails to guess the number
    cout << "\n Game Over!" << endl;
    cout << "The correct number was: " << secretNumber << endl;
}

int main()
{
    // Seed the random number generator
    srand(time(0));

    int choice;

    cout << "======================================" << endl;
    cout << "     WELCOME TO NUMBER GUESSING GAME" << endl;
    cout << "======================================" << endl;

    // Main menu loop
    while (true)
    {
        cout << "\nChoose a Game Mode:\n";
        cout << "1. Easy Mode    (1-50, 8 Chances)\n";
        cout << "2. Medium Mode  (1-70, 6 Chances)\n";
        cout << "3. Hard Mode    (1-100, 4 Chances)\n";
        cout << "4. Quit Game\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                playGame(50, 8);      // Easy mode
                break;

            case 2:
                playGame(70, 6);      // Medium mode
                break;

            case 3:
                playGame(100, 4);     // Hard mode
                break;

            case 4:
                cout << "\nThank you for playing!" << endl;
                cout << "Have a great day!\n";
                return 0;

            default:
                cout << "\n Invalid choice! Please select a valid option.\n";
        }

        // Ask the user if they want to play again
        char again;
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> again;

        if (again == 'N' || again == 'n')
        {
            cout << "\nThank you for playing!" << endl;
            cout << "Goodbye!\n";
            break;
        }
    }

    return 0;
}