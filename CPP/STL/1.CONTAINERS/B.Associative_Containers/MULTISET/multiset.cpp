#include <iostream>
#include <set>

using namespace std;

int main(){
    multiset<int> ms; // creates an empty multiset of integers


    ms.insert(10); // inserts an element into the multiset
    ms.insert(20);
    ms.insert(30);
    ms.insert(10); // duplicate elements are allowed in a multiset
    ms.erase(10); // removes all occurrences of the specified element from the multiset
    cout << "Size of multiset is : " << ms.size() << endl; // returns the number of elements in the multiset
    cout << "Is multiset empty? : " << (ms.empty() ? "Yes" : "No") << endl; // returns true if the multiset is empty, false otherwise
    cout << "Elements in the multiset are : ";      


    for(auto x : ms){
        cout << x << " ";
    } // for each loop to print the elements of the multiset
    cout << endl;
    return 0;
}