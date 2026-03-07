// Lecture 12: Struct

// normal structure 

// #include <iostream>


// using namespace std;    

// int main() {

//     // Define a struct to represent a point in 2D space
//     struct Point {
//         int x; // X-coordinate
//         int y; // Y-coordinate
//     };

//     // Create an instance of the Point struct
//     Point p1;
//     p1.x = 10; // Set the x-coordinate
//     p1.y = 20; // Set the y-coordinate

//     // Print the coordinates of the point
//     cout << "Point p1: (" << p1.x << ", " << p1.y << ")" << endl;

//     return 0;
// }

// structure to pointer

#include <iostream>

using namespace std;

int main() {

    // Define a struct to represent a point in 2D space
    struct Point {
        int x; // X-coordinate
        int y; // Y-coordinate
    };

    // Create an instance of the Point struct
    Point p1;
    p1.x = 10; // Set the x-coordinate
    p1.y = 20; // Set the y-coordinate

    // Create a pointer to the Point struct
    Point* ptr = &p1;

    // Access and print the coordinates of the point using the pointer
    cout << "Point p1: (" << ptr->x << ", " << ptr->y << ")" << endl;

    return 0;
}

