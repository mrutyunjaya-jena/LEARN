#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> l; // initialization of list container
    l = {10, 20}; // assigning values to the list

    l.push_back(30); // adds an element to the end of the list
    l.push_front(5); // adds an element to the front of the list
    // l.pop_back(); // removes the last element of the list
    // l.pop_front(); // removes the first element of the list



    for(auto x : l){
        cout << x << endl;
    } // for each loop to print the elements of the list
    return 0;
}