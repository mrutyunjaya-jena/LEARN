// Fibonacci sequence generator in C++

#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the number you want to print fibponacci sequence up to: ";
    cin >> n;

    int a=0, b=1 ,c;
    cout << "Fibonacci series up to " << n << "\n" << " is: ";

    while(a <= n){
        cout << a << " ";
        c = a+b;
        a = b;
        b =c ;

    }


    return 0;
}