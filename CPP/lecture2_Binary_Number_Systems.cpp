// Binary Number Systems C++ Lecture 2

// In C++, we can represent binary numbers using the prefix "0b" or "0B". 
// For example, the binary number 1011 can be represented as 0b1011 in C++. When we run the program, it will output the decimal equivalent of the binary number, which is 11 in this case.
// #include <iostream>

// using namespace std;

// int main() {
//     int x = 0b1011;
//     cout << x << endl;
// }

// Using bit set 

#include <iostream>
#include <bitset>
using namespace std;

// int main() {
//     int x = 13;
//     bitset<8> b(x);
//     cout << b << endl;
// }

// #include <iostream>
// using namespace std;

// void printBinary(int n) {
//     while(n > 0) {
//         cout << n % 2;
//         n /= 2;
//     }
// }

// int main() {
//     printBinary(13);
// }

//Bitwise Operators
#include <iostream>
using namespace std;

int main() {
    int a = 5;   // 0101
    int b = 3;   // 0011

    cout << (a & b) << endl;  // 1
    cout << (a | b) << endl;  // 7
    cout << (a ^ b) << endl;  // 6
}