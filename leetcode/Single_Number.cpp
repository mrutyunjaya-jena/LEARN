// 136. Single Number
// usong XOR operator
// 0^0 = 0
// 0^n = n
// n^n = 0  

#include <iostream>
#include <vector>

class solution{
public:
    int singleNumber(std::vector<int>& nums){
        int result = 0;
        for(int num : nums){
            result ^= num; // XOR operation 
        }
        return result;
    }
};  

int main(){
    std::vector<int> nums = {2, 2, 1};
    solution sol;
    std::cout << sol.singleNumber(nums) << std::endl; // Output: 1
    return 0;
}
