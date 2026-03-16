// similar to set but it is not ordered and it is implemented using hash table
#include <iostream>
#include <unordered_set>


using namespace std;
int main(){
    unordered_set<int> set1;
    set1 = {1, 2, 3, 4, 5};

    set1.insert(6); // inserting method 1
    set1.emplace(7); // inserting method 2 // emplace is more efficient than insert because it constructs the element in place
    set1.insert({8, 9}); // inserting method 3

    // deleting method 1
    set1.erase(9);
    // set1.clear(); // deleting method 2  


     // accessing method 1
    auto it = set1.find(10);
    if(it != set1.end()){
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }
    // accessing method 2
    cout << "Accessing method 2: " << set1.count(4) << endl; // returns the number of elements with the specified value (0 or 1 for unordered_set)


    


    for(const auto& element : set1){
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
