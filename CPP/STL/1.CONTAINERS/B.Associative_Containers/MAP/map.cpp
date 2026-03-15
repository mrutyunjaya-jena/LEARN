#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

    map<int, string> map1;

    map1 = {{1, "sun"}, {2, "mon"}, {3, "tue"}, {4, "wed"}, {5, "thu"}, {6, "fri"}, {7, "sat"}};

    map1[8] = "holiday"; // inserting method 1
    map1.insert({9, "workday"}); // inserting method 2
    //more methods to insert: emplace, emplace_hint, insert_or_assign
    map1.emplace(10, "weekend"); // inserting method 3
    map1.emplace_hint(map1.end(), 11, "holiday"); // inserting method 4
    map1.insert_or_assign(12, "vacation"); // inserting method 5

    //another methods to delete: erase, clear
    map1.erase(12); // deleting method 1
    // map1.clear(); // deleting method 2

    // accessing method 1
    cout << "Accessing method 1: " << map1[1] << endl;
    // accessing method 2
    cout << "Accessing method 2: " << map1.at(2) << endl;
    // accessing method 3
    cout << "Accessing method 3: " << map1.find(3)->second << endl; 
    

    for(const auto& pair : map1){
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}