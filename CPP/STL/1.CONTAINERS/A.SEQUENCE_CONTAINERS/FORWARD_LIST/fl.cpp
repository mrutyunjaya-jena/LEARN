#include <iostream>
#include <forward_list>


using namespace std;

int main(){

    forward_list<int> fl; // initialization of forward list container
    fl = {10, 20}; // assigning values to the forward list

    fl.push_front(5); // adds an element to the front of the list
    fl.push_front(1); // adds another element to the front of the list  
    
     cout << "Size of fl is : " << distance(fl.begin(), fl.end()) << endl; // returns the number of elements in the list
     cout << "Front element of fl is : " << fl.front() << endl; // returns the first element of the list
     cout << "Is fl empty? : " << (fl.empty() ? "Yes" : "No") << endl; // returns true if the list is empty, false otherwise


    for(auto x : fl){
        cout << x << endl;
    } // for each loop to print the elements of the forward list


    return 0;
}