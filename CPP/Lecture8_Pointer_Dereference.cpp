// Lecture 8: Pointer & Dereference

#include <iostream>
using namespace std;    

int main(){
    int a = 10; // Declare an integer variable
    int* ptr = &a; // Declare a pointer and assign it the address of 'a'
    cout << "Value of a: " << a << endl; // Output the value of 'a'
    cout << "Address of a: " << &a << endl; // Output the address of 'a'
    cout << "Value of ptr (address of a): " << ptr << endl; // Output the value of 'ptr' (which is the address of 'a')
    cout << "Dereferenced value of ptr (value of a): " << *ptr << endl; // Output the value pointed to by 'ptr' (which is the value of 'a') 
    




    return 0;
}