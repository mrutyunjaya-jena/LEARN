// SINGLE LINE COMMENT 
/* MULTI-LINE COMMENT */

//Lecture 1 : Variable, Data Types & Operators

#include <iostream>

int main() {

    //Hello World
    std::cout << "Hello, World!" << std::endl;



    // Variable declaration and initialization
    int age = 25; // Integer variable
    double height = 5.9; // Double variable
    char grade = 'A'; // Character variable
    bool isStudent = true; // Boolean variable

    // Output the variables
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Is Student: " << isStudent << std::endl;

    // Operators
    int a = 10, b = 5;
    
    // Arithmetic operators
    std::cout << "a + b = " << a + b << std::endl; // Addition
    std::cout << "a - b = " << a - b << std::endl; // Subtraction
    std::cout << "a * b = " << a * b << std::endl; // Multiplication
    std::cout << "a / b = " << a / b << std::endl; // Division
    std::cout << "a % b = " << a % b << std::endl; // Modulus

    return 0;
}


