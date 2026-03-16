#include <iostream>
#include <unordered_map>
#include <string>


int main(){
    

    std::unordered_multimap<std::string, int > unomm;

    
    unomm.insert({"John", 25});
    unomm.insert({"Alice", 30});
    unomm.insert({"Bob", 22});
    unomm.insert({"John", 28});

    // Display the contents of the unordered_multimap
    //more methods to insert elements into the unordered_multimap
    unomm.insert(std::make_pair("Alice", 32));
    unomm.insert(std::make_pair("Charlie", 27));

    // Display the contents of the unordered_multimap

    for(auto x : unomm){
        std::cout << x.first << ": " << x.second << std::endl;
    }

    return 0;
}