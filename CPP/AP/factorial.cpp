// Factorial 

#include <iostream>

using namespace std;

int fact(int n); // declaration

int main(){

    int n;
    cout << "Enter the number you want to find factorial of: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << fact(n) << endl; //callimg function

    return 0;
}

int fact(int n){ // code block function
    if(n == 0 || n ==1){
        return 1;

    }
    else{
        return n*fact(n-1);
    }
}