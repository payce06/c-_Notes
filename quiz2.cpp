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