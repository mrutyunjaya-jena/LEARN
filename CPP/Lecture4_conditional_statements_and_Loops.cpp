//Lecture 4: conditional statements and Loops


#include <iostream>
using namespace std;    

int main() {    
    int a = 10, b = 20;

    // if-else statement
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "b is greater than a" << endl;
    }

    // for loop
    cout << "For loop: ";
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // while loop
    cout << "While loop: ";
    int j = 0;
    while (j < 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // do-while loop
    cout << "Do-while loop: ";
    int k = 0;
    do {
        cout << k << " ";
        k++;
    } while (k < 5);
    cout << endl;

    return 0;
}