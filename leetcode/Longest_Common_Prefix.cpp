// 14. Longest Common Prefix

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string prefix = strs[0];

        for(int i = 1; i < strs.size(); i++) {
            
            while(strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);

                if(prefix == "")
                    return "";
            }
        }

        return prefix;
    }
};

int main() {
    Solution s;
    vector<string> strs = {"flower","flow","floamer"};

    cout << s.longestCommonPrefix(strs) << endl;

    return 0;
}