#include <iostream>
#include <array>

using namespace std;
int main(){
     array<int, 5> arr; // creates an array of size 5

    //  arr = {1, 2, 3, 4, 5}; // initializes the array with values
     arr.fill(10); // fills the array with the specified value
     arr.at(2) = 20; // assigns a value to the element at the specified index
     arr.rbegin()[0] = 30; // assigns a value to the last element of the array using reverse iterator   
     arr.rend()[-1] = 40; // assigns a value to the first element of the array using reverse iterator
     
     cout << "Size of arr is : " << arr.size() << endl; // returns the number of elements in the array
     cout << "Front element of arr is : " << arr.front() << endl; // returns the first element of the array
     cout << "Back element of arr is : " << arr.back() << endl; // returns the last element of the array
     cout << "Element at index 2 is : " << arr.at(2) << endl; // returns the element at the specified index
     cout << "Is arr empty? : " << (arr.empty() ? "Yes" : "No") << endl; // returns true if the array is empty, false otherwise
     
     for(auto x : arr){ 
         cout << x << endl;
     } // for each loop to print the array elements
     return 0;
}