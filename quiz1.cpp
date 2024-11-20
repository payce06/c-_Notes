#include <iostream>
#include <string>
#include <cstdlib> // it provides to_string
#include <iomanip> // it provides setw function.
using namespace std;

// Question class
// Stores a single question, its four options and their correct answer
class Question {
private:
    string questionText;
    string options[4];
    char correctAnswer; // Correct answer as a character (A, B, C, or D)

    public:
    // Default constructor
    Question() {
       
    }

    // Parameterized constructor
    Question(string qText, string opt1, string opt2, string opt3, string opt4, char cAnswer) {
        questionText = qText;
        options[0] = opt1;
        options[1] = opt2;
        options[2] = opt3;
        options[3] = opt4;
        correctAnswer = cAnswer;
    }

// Ask the question
    void askQuestion() {
        cout << questionText << endl;
        // Because it is storing optionChar as ASCII, C++ knows if I do ++, then it will store the next letter
        char optionChar = 'A';
        for (int i = 0; i < 4; i++) {
            cout << optionChar << ". " << options[i] << endl;
            optionChar++;
        }
    }

// Check the answer
    bool checkAnswer(char userAnswer) {
        if (toupper(userAnswer) == correctAnswer) {
            return true;
        } else {
            return false;
        }
    }
};

// Function to conduct the quiz
int conductQuiz(Question questions[], int size) {
    int score = 0;
    char userAnswer;
    for (int i = 0; i < size; i++) {
        cout << "\nQuestion " << i + 1 << ":\n";
        questions[i].askQuestion();

        cout << "Your Answer: ";
        cin >> userAnswer;

        if (questions[i].checkAnswer(userAnswer) == true) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong answer!\n";
        }
    }

    return score;
}

// Function to display high scores
void displayHighScores(string players[][2], int playerCount) {
    cout << "\nHigh Scores:\n";
    cout << setw(20) << "Player Name" << setw(10) << "Score\n";
    cout << string(30, '-') << endl;

    for (int i = 0; i < playerCount; i++) {
        cout << setw(20) << players[i][0] << setw(10) << players[i][1] << endl;
    }
    cout << endl;
}

// Main function
int main() {
    // Create questions array
    const int totalQuestions = 5;
    Question questions[totalQuestions] = {
        Question("What is the capital of France?", "Paris", "London", "Rome", "Berlin", 'A'),
        Question("What is 2 + 2?", "3", "4", "5", "6", 'B'),
        Question("Who wrote 'Hamlet'?", "Shakespeare", "Dante", "Chaucer", "Homer", 'A'),
        Question("What is the boiling point of water (Celsius)?", "90", "100", "110", "120", 'B'),
        Question("Which planet is known as the Red Planet?", "Earth", "Mars", "Jupiter", "Saturn", 'B')
    };

    // Player data storage
    const int maxPlayers = 100; // Maximum number of players
    string players[maxPlayers][2]; // 2D array to store player name and high score as strings
    int playerCount = 0;          // Current number of players

    string playerName;
    char choice; // Can be 1, 2, or 3 when the user enters

    cout << "Welcome to the Pace Quiz!\n";

    // While true for forever loop so that you are displayed the menu after a game ends
    while (true) {
        // Show the menu options
        cout << "\nMenu:\n";
        cout << "1. Start New Quiz\n";
        cout << "2. View High Scores\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;