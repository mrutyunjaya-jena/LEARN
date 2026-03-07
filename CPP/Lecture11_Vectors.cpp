// Lecture 11: Vectors
// topic of stl library (standard template library)
#include <iostream>
#include <vector>

using namespace std;

int main(){

    // Declare a vector of integers
    vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30); 
    
    //more methods delete, insert, clear, size, empty, etc
    numbers.pop_back(); // Remove the last element
    numbers.insert(numbers.begin() + 1, 25); // Insert 25 at index 1
    numbers.clear(); // Remove all elements
    cout << "Size: " << numbers.size() << endl; // Print the size of the vector
    cout << "Empty: " << numbers.empty() << endl; // Print whether the vector is empty      

    // Print the elements of the vector
    for(const auto& a : numbers) {
        cout << a << endl; // Print each element of the vector
    }
    return 0;
}

