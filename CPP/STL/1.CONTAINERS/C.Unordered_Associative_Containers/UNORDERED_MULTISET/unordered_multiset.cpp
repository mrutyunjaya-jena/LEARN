#include <iostream>
#include <unordered_set>
#include <string>

int main(){
    

    std::unordered_multiset<int > unomset;

    
    unomset.insert(5);
    unomset.insert(6);
    unomset.insert(11);
    unomset.insert(17);
    


    for(auto x : unomset){
        std::cout << x << std::endl;
    }    
    return 0;
}