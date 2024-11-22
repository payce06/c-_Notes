#include <iostream>
#include <string>
#include <cstdlib> // For rand()
#include <iomanip>

using namespace std;

// Function to generate and ask a random math question
int askMathQuestion() {
    // Generate random numbers and operator
    int num1 = rand() % 100 + 1; // Random number between 1 and 100
    int num2 = rand() % 100 + 1;
    char operators[] = {'+', '-', '*', '/'};
    char op = operators[rand() % 4]; // Randomly pick an operator

    int correctAnswer = 0;

    // Use if statements to determine the operation
    if (op == '+') {
        correctAnswer = num1 + num2;
    } else if (op == '-') {
        correctAnswer = num1 - num2;
    } else if (op == '*') {
        correctAnswer = num1 * num2;
    } else if (op == '/') {
        // Ensure no division by zero
        while (num2 == 0) {
    num2 = rand() % 100 + 1;
        }
        correctAnswer = num1 / num2;
    }

    // Ask the question
    cout << "What is " << num1 << " " << op << " " << num2 << "? ";
    int userAnswer;
    cin >> userAnswer;

    // Check the answer
    if (userAnswer == correctAnswer) {
        cout << "Correct!\n";
        return 1;
    } else {
        cout << "Wrong! The correct answer was " << correctAnswer << ".\n";
        return 0;
    }
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
    const int maxPlayers = 100;
    string players[maxPlayers][2];
    int playerCount = 0;

    string playerName;
    char choice;

    cout << "Welcome to the Math Game!\n";
while (true) {
        // Display menu
        cout << "\nMenu:\n";
        cout << "1. Start New Game\n";
        cout << "2. View High Scores\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '1') {
            cout << "Enter your name: ";
            cin >> playerName;