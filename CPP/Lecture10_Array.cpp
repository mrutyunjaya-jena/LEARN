// Lecture 10: Array


#include <iostream>

using namespace std;

int main(){

    int Array[5] = {10, 20, 30, 40, 50}; // Declare and initialize an array of integers


    for(int x : Array) {
        cout << x << endl; // Print each element of the array
    }


    cout << "Size of the array: " << sizeof(Array) / sizeof(Array[0]) << endl; // Calculate and print the size of the array
    cout << "First element: " << Array[0] << endl; // Access and print the first element of the array
    cout << "Last element: " << Array[4] << endl; // Access and print the last element of the array
    return 0;
}
