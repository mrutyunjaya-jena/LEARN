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


    // switch statement
    int day = 3;
    switch (day) {
        case 1:     
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        default:
            cout << "Weekend" << endl;
    }       


    //for-each 
    cout << "For-each loop: ";
    int arr[] = {1, 2, 3, 4, 5};
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}