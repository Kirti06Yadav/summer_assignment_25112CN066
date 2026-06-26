#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variables
    string name;
    int choice, ans, score = 0;

    // Stores the correct answers for incorrect questions
    string wrongAnswers = "";

    cout << "********** QUIZ APPLICATION **********\n";

    cout << "Enter Participant Name: ";
    getline(cin, name);

    cout << "\nWelcome, " << name << "!\n";

    cout << "\nSelect Quiz Topic:\n";
    cout << "1. Maths\n";
    cout << "2. English\n";
    cout << "3. Science\n";
    cout << "4. Geography\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "\n----- Quiz Started -----\n";

    switch(choice)
    {
        // ==================== MATHS ====================
        case 1:

            cout << "\nQ1. What is 5 + 3?\n";
            cout << "1. 6\n2. 8\n3. 9\n4. 10\n";
            cin >> ans;

            if(ans == 2)
                score++;
            else
                wrongAnswers += "Q1. What is 5 + 3? Correct Answer: 8\n";

            cout << "\nQ2. What is 10 - 4?\n";
            cout << "1. 5\n2. 7\n3. 6\n4. 8\n";
            cin >> ans;

            if(ans == 3)
                score++;
            else
                wrongAnswers += "Q2. What is 10 - 4? Correct Answer: 6\n";

            cout << "\nQ3. What is 6 x 2?\n";
            cout << "1. 10\n2. 12\n3. 14\n4. 16\n";
            cin >> ans;

            if(ans == 2)
                score++;
            else
                wrongAnswers += "Q3. What is 6 x 2? Correct Answer: 12\n";

            cout << "\nQ4. What is 20 / 5?\n";
            cout << "1. 2\n2. 3\n3. 4\n4. 5\n";
            cin >> ans;

            if(ans == 3)
                score++;
            else
                wrongAnswers += "Q4. What is 20 / 5? Correct Answer: 4\n";

            break;

        // ==================== ENGLISH ====================
        case 2:

            cout << "\nQ1. Choose the correct spelling.\n";
            cout << "1. Beautifull\n2. Beautiful\n3. Beutiful\n4. Beautifal\n";
            cin >> ans;
            if(ans == 2)
                score++;
            else
                wrongAnswers += "Q1. Correct Spelling: Beautiful\n";

            cout << "\nQ2. Opposite of 'Hot' is:\n";
            cout << "1. Warm\n2. Cool\n3. Cold\n4. Heat\n";
            cin >> ans;
            if(ans == 3)
                score++;
            else
                wrongAnswers += "Q2. Correct Answer: Cold\n";

            cout << "\nQ3. Which is a vowel?\n";
            cout << "1. B\n2. D\n3. A\n4. T\n";
            cin >> ans;
            if(ans == 3)
                score++;
            else
                wrongAnswers += "Q3. Correct Answer: A\n";

            cout << "\nQ4. 'Dog' is a:\n";
            cout << "1. Verb\n2. Noun\n3. Adjective\n4. Adverb\n";
            cin >> ans;
            if(ans == 2)
                score++;
            else
                wrongAnswers += "Q4. Correct Answer: Noun\n";

            break;

        // ==================== SCIENCE ====================
        case 3:

            cout << "\nQ1. Which planet is called the Red Planet?\n";
            cout << "1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n";
            cin >> ans;
            if(ans == 2)
                score++;
            else
                wrongAnswers += "Q1. Correct Answer: Mars\n";

            cout << "\nQ2. Water freezes at:\n";
            cout << "1. 0°C\n2. 50°C\n3. 100°C\n4. 25°C\n";
            cin >> ans;
            if(ans == 1)
                score++;
            else
                wrongAnswers += "Q2. Correct Answer: 0°C\n";

            cout << "\nQ3. Plants make food by:\n";
            cout << "1. Digestion\n2. Respiration\n3. Photosynthesis\n4. Evaporation\n";
            cin >> ans;
            if(ans == 3)
                score++;
            else
                wrongAnswers += "Q3. Correct Answer: Photosynthesis\n";

            cout << "\nQ4. The Sun is a:\n";
            cout << "1. Planet\n2. Moon\n3. Star\n4. Satellite\n";
            cin >> ans;
            if(ans == 3)
                score++;
            else
                wrongAnswers += "Q4. Correct Answer: Star\n";

            break;

        // ==================== GEOGRAPHY ====================
        case 4:

            cout << "\nQ1. Which is the largest continent?\n";
            cout << "1. Africa\n2. Asia\n3. Europe\n4. Australia\n";
            cin >> ans;
            if(ans == 2)
                score++;
            else
                wrongAnswers += "Q1. Correct Answer: Asia\n";

            cout << "\nQ2. Which is the largest ocean?\n";
            cout << "1. Atlantic\n2. Indian\n3. Pacific\n4. Arctic\n";
            cin >> ans;
            if(ans == 3)
                score++;
            else
                wrongAnswers += "Q2. Correct Answer: Pacific Ocean\n";

            cout << "\nQ3. Capital of India is:\n";
            cout << "1. Mumbai\n2. Kolkata\n3. Chennai\n4. New Delhi\n";
            cin >> ans;
            if(ans == 4)
                score++;
            else
                wrongAnswers += "Q3. Correct Answer: New Delhi\n";

            cout << "\nQ4. Which country is known as the Land of the Rising Sun?\n";
            cout << "1. China\n2. Japan\n3. India\n4. Nepal\n";
            cin >> ans;
            if(ans == 2)
                score++;
            else
                wrongAnswers += "Q4. Correct Answer: Japan\n";

            break;

        default:
            cout << "\nInvalid Choice! Restart the program.\n";
            return 0;
    }

    // ==================== RESULT ====================
    cout << "\n----- Quiz Completed -----\n";
    cout << "Participant: " << name << endl;
    cout << "Your Score: " << score << " / 4\n";

    // Show correct answers for wrong responses
    if(wrongAnswers != "")
    {
        cout << "\nCorrect Answers for the Questions You Got Wrong:\n";
        cout << "-----------------------------------------------\n";
        cout << wrongAnswers;
    }
    else
    {
        cout << "\nExcellent! You answered all the questions correctly.\n";
    }

    // Performance message
    if(score == 4)
        cout << "\nExcellent Performance!\n";
    else if(score >= 2)
        cout << "\nGood Job!\n";
    else
        cout << "\nKeep Practicing!\n";

    return 0;
}