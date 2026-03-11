// 9. Palindrome Number

#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }   


        int rev = 0, temp = x;  
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }       
        return rev == x;
    }
};

int main() {
    Solution s;
    int x = 121;

    cout << s.isPalindrome(x) << endl;

    return 0;
}   