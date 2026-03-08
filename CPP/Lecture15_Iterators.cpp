// Lecture 15: Iterators
// simple iterator example

#include <iostream>
#include <vector> // Include the vector header for using std::vector    
using namespace std;
int main() {

    // Create a vector of integers
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Create an iterator for the vector
    vector<int>::iterator it;

    // Use the iterator to traverse and print the elements of the vector
    cout << "Vector elements: ";
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " "; // Dereference the iterator to get the value
    }
    cout << endl;

    return 0;
}