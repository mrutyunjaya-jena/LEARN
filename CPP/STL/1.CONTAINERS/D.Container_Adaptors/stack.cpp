#include <iostream>
#include <stack>

int main(){
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);  

    // std::cout << "Top element: " << s.top() << std::endl; // Output: 3  
    // s.pop();
    // std::cout << "Top element after pop: " << s.top() << std::endl; // Output: 2    


    
    for(int i = 0; i < 3; i++){
        std::cout << "Top element: " << s.top() << std::endl; // Output: 3, 2, 1
        s.pop();
    }
    return 0;
}