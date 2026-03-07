//Lecture 7: Functions

#include <iostream>
using namespace std;

// function declaration
void greet();
// factorial function prototype
int factorial(int n);
// Function prototype

int main(){


    // function call
    greet(); // Calling the function


    // Calling the factorial function
    int number = 5;
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;




    return 0;
}

//factorial function definition
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive case
}   



    // function definition
void greet() {
        cout << "Hello, welcome to C++ programming!" << endl;
}       

