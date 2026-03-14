#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> vec = {1, 2, 3, 4, 5};
    // for(auto x : vec){
    //     cout << x << endl;
    // } // for each loop to print the vector elements

    vec.push_back(6); //pushes back an element to the end of the vector
    cout << "Size of vec is : " << vec.size() << endl; // returns the number of elements in the vector
    vec.pop_back(); // removes the last element from the vector
    cout << "Front element of vec is : " << vec.front() << endl; // returns the first element of the vector
    cout << "Back element of vec is : " << vec.back() << endl; // returns the last element of the vector
    cout << "Element at index 2 is : " << vec.at(2) << endl; // returns the element at the specified index
    cout << "Is vec empty? : " << (vec.empty() ? "Yes" : "No") << endl; // returns true if the vector is empty, false otherwise

    
    // for(auto x : vec){
    //     cout << x << endl;
    // }


    // vector<int> vec1(12, 5); // creates a vector of size 12 with all elements initialized to 5
    // for(auto x : vec1){
    //     cout << x << endl;
    // }

    return 0;
}