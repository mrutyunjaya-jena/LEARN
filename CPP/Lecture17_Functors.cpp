// Lecture 17: Functors
// Functor example
// we can use functors to create custom comparison logic for sorting or other algorithms
// by using a functor, we can encapsulate the comparison logic in a reusable way
// for using a functor, we need to define a struct or class that overloads the operator() to perform the desired comparison


#include <iostream>
#include <vector> // Include the vector header for using std::vector
#include <algorithm> // Include the algorithm header for using std::sort
#include <functional> // Include the functional header for using std::greater
using namespace std;  

// here functor is a struct that overloads the operator() to compare two integers and return true if the first integer is greater than the second integer, which will sort the vector in descending order when used with std::sort.
// Define a functor for comparing integers in descending order

struct DescendingComparator {
    bool operator()(int a, int b) { 
        return a > b; // Return true if a should come before b (for descending order)
    }
};  

int main() {
    // Create a vector of integers
    vector<int> numbers = {5, 2, 9, 1, 3};

    // Print the original vector
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Sort the vector in descending order using the functor
    sort(numbers.begin(), numbers.end(), DescendingComparator());

    // Print the sorted vector
    cout << "Sorted vector (descending): ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
