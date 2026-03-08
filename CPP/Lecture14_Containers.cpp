// Lecture 14: Containers  (STL)

#include <iostream>
#include <vector> // Include the vector header for using std::vector
#include <algorithm> // Include the algorithm header for using std::sort
#include <list> // Include the list header for using std::list
#include <map> // Include the map header for using std::map 

using namespace std;
int main(){
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

    // Print the sorted vector
    cout << "Sorted vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;



    //map example
    map<string, int> ageMap; // Create a map to store names and ages    
    ageMap["Alice"] = 30; // Add a name and age to the map
    ageMap["Bob"] = 25; // Add another name and age to the map
    ageMap["Charlie"] = 35; // Add another name and age to the map

    // Print the map contents
    cout << "Age Map: ";
    for (const auto& pair : ageMap) {
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;
}