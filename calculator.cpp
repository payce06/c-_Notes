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
