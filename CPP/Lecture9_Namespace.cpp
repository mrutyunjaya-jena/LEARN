//Lecture 9: Namespace

#include <iostream>

// Define a namespace called 'MathOperations'
namespace MathOperations {
    // Function to add two numbers
    int add(int a, int b) {
        return a + b;
    }       

    // Function to subtract two numbers
    int subtract(int a, int b) {
        return a - b;
    }       

    // Function to multiply two numbers
    int multiply(int a, int b) {
        return a * b;
    }   

    // Function to divide two numbers
    double divide(int a, int b) {
        if (b != 0) {
            return static_cast<double>(a) / b; // Cast to double for floating-point division
        } else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0; // Return 0 or handle as needed
        }
    }



}
int main() {
    int num1 = 10;
    int num2 = 5;

    // Using the functions from the MathOperations namespace
    std::cout << "Addition: " << MathOperations::add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << MathOperations::subtract(num1, num2) << std::endl;
    std::cout << "Multiplication: " << MathOperations::multiply(num1, num2) << std::endl;
    std::cout << "Division: " << MathOperations::divide(num1, num2) << std::endl;

    return 0;
}
