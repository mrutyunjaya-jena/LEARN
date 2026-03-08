// Lecture 13: STL

#include <iostream>
#include <vector> // Include the vector header for using std::vector    
#include <algorithm> // Include the algorithm header for using std::sort


using namespace std;
int main() {

    // Create a vector of integers
    vector<int> numbers;

    // Add some numbers to the vector
    numbers.push_back(5);
    numbers.push_back(2);
    numbers.push_back(9);
    numbers.push_back(1);
    numbers.push_back(3);

    // Print the original vector
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Sort the vector in ascending order
    sort(numbers.begin(), numbers.end());

    // Sort the vector in descending order

    // sort(numbers.begin(), numbers.end(), greater<int>());
    sort(numbers.begin(), numbers.end(), greater<int>());
    

    // Print the sorted vector
    cout << "Sorted vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}