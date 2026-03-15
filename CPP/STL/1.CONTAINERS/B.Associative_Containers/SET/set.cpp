#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s; // creates an empty set of integers 

    s.insert(10); // inserts an element into the set
    s.insert(20);
    s.insert(30);
    s.insert(20); // duplicate elements are not allowed in a set    
    cout << "Size of set is : " << s.size() << endl; // returns the number of elements in the set
    cout << "Is set empty? : " << (s.empty() ? "Yes" : "No") << endl; // returns true if the set is empty, false otherwise
    cout << "Elements in the set are : ";
    s.erase(20); // removes an element from the set
    for(auto x : s){
        cout << x << " ";
    } // for each loop to print the elements of the set
    cout << endl;

    return 0;
}