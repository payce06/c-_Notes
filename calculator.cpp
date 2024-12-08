#include <iostream>
using namespace std;

class Calculator {
public:
    // Functions for basic arithmetic operations
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0; // Return 0 to avoid crash
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char operation;

    // Prompt user for input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation based on the operator
    if (operation == '+') {
        cout << "Result: " << calc.add(num1, num2) << endl;
    } else if (operation == '-') {
        cout << "Result: " << calc.subtract(num1, num2) << endl;
    } else if (operation == '*') {
        cout << "Result: " << calc.multiply(num1, num2) << endl;
    } else if (operation == '/') {
        cout << "Result: " << calc.divide(num1, num2) << endl;
    } else {
        cout << "Error: Invalid operator!" << endl;
    }

    return 0;
}