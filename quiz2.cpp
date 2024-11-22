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