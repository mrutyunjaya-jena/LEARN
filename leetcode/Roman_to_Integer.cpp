// 13. Roman to Integer

#include <iostream>
#include <unordered_map>

using namespace std;


class Solution {
public:
    int romanToInt(string s) {
         
        unordered_map<char, int> val = {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}

        };

        int result = 0;
        
        for(int i=0; i<s.length(); i++){
            if(i < s.length() -1 && val[s[i]] < val[s[i + 1]] ){
                result -= val[s[i]];
            }else{
                result += val[s[i]];
            }

        }
        return result;

    }
};

int main() {
    Solution s;
    string str = "MCMXCIV";

    cout << s.romanToInt(str) << endl;

    return 0;
}   
