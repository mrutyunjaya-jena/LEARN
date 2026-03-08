// Lecture 18: Lambda
// simple Lambda example


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;    

int main() {
    // Create a vector of integers
    vector<int> numbers = {5, 2, 9, 1, 3};

    // Print the original vector
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Sort the vector in descending order using a lambda function
    sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b; // Return true if a should come before b (for descending order)
    });

    // Print the sorted vector
    cout << "Sorted vector (descending): ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
