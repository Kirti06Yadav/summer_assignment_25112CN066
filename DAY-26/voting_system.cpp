#include <iostream>   
#include <string>     
using namespace std;

int main()
{
    // Array to store the names of the candidates
    string candidate[4] = {"Alice", "Bob", "Charlie", "David"};

    // Array to store the votes of each candidate
    // Initially all votes are set to 0
    int votes[4] = {0, 0, 0, 0};

    // Variables to store user's menu choice and vote choice
    int choice, voteChoice;

    // Loop runs until the user chooses to exit
    do
    {
        // Display the main menu
        cout << "\n===== Voting System =====\n";
        cout << "1. Vote for your favorite Candidate\n";
        cout << "2. Check the number of votes of each Candidate\n";
        cout << "3. Check the candidate who is leading\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Perform action based on the user's choice
        switch (choice)
        {
        // ------------------ Option 1: Cast Vote ------------------
        case 1:

            // Display the list of candidates
            cout << "\nCandidates:\n";
            for (int i = 0; i < 4; i++)
            {
                cout << i + 1 << ". " << candidate[i] << endl;
            }

            // Ask the user to select a candidate
            cout << "Enter candidate number (1-4): ";
            cin >> voteChoice;

            // Check if the entered number is valid
            if (voteChoice >= 1 && voteChoice <= 4)
            {
                // Increase vote count for the selected candidate
                votes[voteChoice - 1]++;

                cout << "Vote cast successfully!\n";
            }
            else
            {
                // Display error for invalid candidate number
                cout << "Invalid candidate number.\n";
            }
            break;

        // ------------------ Option 2: Display Vote Count ------------------
        case 2:

            cout << "\nVote Count:\n";

            // Display each candidate along with their votes
            for (int i = 0; i < 4; i++)
            {
                cout << candidate[i] << " : " << votes[i] << " votes\n";
            }
            break;

        // ------------------ Option 3: Display Leading Candidate ------------------
        case 3:
        {
            // Assume the first candidate has the maximum votes initially
            int maxVotes = votes[0];

            // Store the index of the leading candidate
            int winner = 0;

            // Variable to check whether there is a tie
            bool tie = false;

            // Compare votes of all candidates
            for (int i = 1; i < 4; i++)
            {
                // If a candidate has more votes than current maximum
                if (votes[i] > maxVotes)
                {
                    maxVotes = votes[i];
                    winner = i;
                    tie = false; // No tie now because a new leader is found
                }

                // If another candidate has equal maximum votes
                else if (votes[i] == maxVotes)
                {
                    tie = true;
                }
            }

            // If no one has received any vote
            if (maxVotes == 0)
            {
                cout << "No votes have been cast yet.\n";
            }

            // If there is a tie between candidates
            else if (tie)
            {
                cout << "No winner\n";
            }

            // Otherwise display the leading candidate
            else
            {
                cout << "Leading Candidate: " << candidate[winner]
                     << " with " << maxVotes << " votes.\n";
            }

            break;
        }

        // ------------------ Exit Program ------------------
        case 0:
            cout << "Exiting the program...\n";
            break;

        // ------------------ Invalid Menu Choice ------------------
        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0); // Repeat until the user selects Exit

    // Program ends successfully
    return 0;
}