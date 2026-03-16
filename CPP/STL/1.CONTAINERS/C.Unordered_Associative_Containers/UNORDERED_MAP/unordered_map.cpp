#include <iostream>
#include <unordered_map>
#include <string>

int main(){

    std::unordered_map<std::string, int> unomap;
    unomap["one"] = 1;
    unomap["two"] = 2;
    unomap["three"] = 3; 
    unomap.insert({"four", 4}); // inserting method 1
    unomap.emplace("five", 5); // inserting method 2 // emplace is more efficient than insert because it constructs the element in place
    unomap.insert({{"six", 6}, {"seven", 7}}); // inserting method 3    
    for(const auto& pair : unomap){
        std::cout << pair.first << ": " << pair.second << std::endl;
    }       


    return 0;
}