// similaarto multi set, but it stores key-value pairs instead of just keys. It allows multiple values for the same key, making it useful for scenarios where you want to associate multiple values with a single key.


#include <iostream>
#include <string>
#include <map>


using namespace std;

int main(){

    multimap<int, string> multimap1;

    multimap1 = {{1, "sun"}, {2, "mon"}, {3, "tue"}, {4, "wed"}, {5, "thu"}, {6, "fri"}, {7, "sat"}};   
    multimap1.insert({1, "holiday"}); // inserting method 1
    multimap1.emplace(2, "workday"); // inserting method 2
    multimap1.emplace_hint(multimap1.end(), 3, "weekend"); // inserting method 3  
    // multimap1.erase(4); // deleting method 1
    // multimap1.clear(); // deleting method 2  
    for(const auto& pair : multimap1){
        cout << pair.first << " : " << pair.second << endl;
    }   
    return 0;
}