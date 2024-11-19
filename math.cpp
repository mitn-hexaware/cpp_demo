#include <iostream>
#include <stdexcept>

class Calculator {
public:
    // Method to perform addition
    double add(double a, double b) {
        return a + b;
    }

    // Method to perform subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Method to perform multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Method to perform division
    double divide(double a, double b) {
        if (b == 0) {
            throw std::invalid_argument("Division by zero is not allowed.");
        }
        return a / b;
    }
};

int main() {
    Calculator calculator;

    double num1 = 10;
    double num2 = 5;

    std::cout << "Addition: " << calculator.add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << calculator.subtract(num1, num2) << std::endl;
    std::cout << "Multiplication: " << calculator.multiply(num1, num2) << std::endl;
    std::cout << "Division: " << calculator.divide(num1, num2) << std::endl;

    return 0;
}
