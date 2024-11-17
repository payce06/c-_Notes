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