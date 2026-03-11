// 1. Two Sum
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            int sec = target - first;

            if (m.find(sec) != m.end()) {
                ans.push_back(m[sec]);
                ans.push_back(i);
                break;
            }

            m[first] = i;
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = s.twoSum(nums, target);

    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}