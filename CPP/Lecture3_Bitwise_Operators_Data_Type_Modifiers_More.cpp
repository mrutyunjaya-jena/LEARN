//Lecture 3: Bitwise Operators, Data Type Modifiers & more

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5, b = 3;
//     cout << (a & b);
// }


//SIZE CHECKING

// #include <iostream>
// using namespace std;

// int main() {
//     cout << sizeof(int) << endl;
//     cout << sizeof(long) << endl;
//     cout << sizeof(long long) << endl;
// }

//TYPE CASTING (IMPLICIT & EXPLICIT)
#include <iostream>
using namespace std;    
int main() {    
int a = 5;
// double b = a;  // automatic type conversion (implicit)

double x = 5.7;
// int y = (int)x;  // explicit type conversion (type casting)


// cout << "Value of b: " << b << endl;  // Output: 5

int y = static_cast<int>(x); // C++ style type casting (explicit)

cout << "Value of y: " << y << endl;  // Output: 5

return 0;
}



