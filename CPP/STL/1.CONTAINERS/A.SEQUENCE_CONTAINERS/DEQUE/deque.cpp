#include <iostream>
#include <deque> // need to use hedder file for deque container


using namespace std;// bad practice to use this in global scope but for simplicity we will use it here



int main(){
    deque<int> d; //initialization
    d = {10 ,20}; // assigning values to the deque

    d.push_back(30); // adds an element to the end of the deque
    d.push_front(5); // adds an element to the front of the deque   
        cout << "Size of deque is : " << d.size() << endl; // returns the number of elements in the deque
        cout << "Front element of deque is : " << d.front() << endl; // returns the first element of the deque
        cout << "Back element of deque is : " << d.back() << endl; // returns the last element of the deque
        cout << "Element at index 2 is : " << d.at(2) << endl; // returns the element at the specified index
        cout << "Is deque empty? : " << (d.empty() ? "Yes" : "No") << endl; // returns true if the deque is empty, false otherwise
    
    for(auto x : d){
        cout << x << endl;
    } // for each loop to print the elements of the deque

    return 0;
}