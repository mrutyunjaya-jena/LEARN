#include <iostream>
#include <queue>
int main(){
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);  

    // std::cout << "Front element: " << q.front() << std::endl; // Output: 1  
    // q.pop();
    // std::cout << "Front element after pop: " << q.front() << std::endl; // Output: 2 

    for(int i = 0; i < 3; i++){
        std::cout << "Front element: " << q.front() << std::endl; // Output: 1, 2, 3
        q.pop();
    }
    return 0;
}