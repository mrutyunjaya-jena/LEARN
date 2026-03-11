//42. Trapping Rain Water

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size(); // Get the size of the height vector
        int left = 0, right = n - 1; // Initialize left and right pointers
        int leftMax = 0, rightMax = 0; // Initialize leftMax and rightMax to keep track of the maximum height from the left and right sides
        int water = 0;

        while (left < right) {
            if (height[left] < height[right]) {  // Move left pointer
                if (height[left] >= leftMax) { // Update leftMax
                    leftMax = height[left]; // Update leftMax
                } else {
                    water += leftMax - height[left]; // Calculate trapped water at left pointer
                }
                left++; // Move left pointer to the right
            } else {
                if (height[right] >= rightMax) { // Update rightMax
                    rightMax = height[right]; // Update rightMax
                } else {
                    water += rightMax - height[right]; // Calculate trapped water at right pointer
                }
                right--; // Move right pointer to the left
            }
        }

        return water;  // Return the total trapped water
    }
        
};

int main() {
    Solution s; // Create an instance of the Solution class
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout << s.trap(height) << endl; // Call the trap function and print the result

    return 0;
}