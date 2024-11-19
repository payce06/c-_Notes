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