// Lecture 16: Algorithms

// example Algorithm: find the maximum element in a vector

#include <iostream>
#include <vector> // Include the vector header for using std::vector
#include <algorithm> // Include the algorithm header for using std::max_element 
using namespace std;

int main() {
    // Create a vector of integers
    vector<int> numbers = {1, 2, 3, 4, 5,99999};

    // Use std::max_element to find the maximum element
    vector<int>::iterator max_it = max_element(numbers.begin(), numbers.end());

    // Print the maximum element
    // *max_it - used because max_it is an iterator, we need to dereference it to get the value
    cout << "Maximum element: " << *max_it << endl;

    return 0;
}