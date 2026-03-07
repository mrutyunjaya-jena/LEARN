//Lecture 5: Break & continue


#include <iostream>
using namespace std;

int main() {    
    // break statement
    cout << "Break statement example: ";
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;  // exit the loop when i is 5
        }
        cout << i << " ";
    }
    cout << endl;

    // continue statement
    cout << "Continue statement example: ";
    for (int j = 0; j < 10; j++) {
        if (j % 2 == 0) {
            continue;  // skip the rest of the loop body for even numbers
        }
        cout << j << " ";
    }
    cout << endl;

    return 0;
}