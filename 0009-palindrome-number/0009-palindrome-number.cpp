#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        string str = "";
        str = to_string(x);
        int strLength, idx = 0;
        strLength = str.length();
        while(idx < strLength/2)
        {
            if(str[idx] != str[strLength-idx-1])
            {
                return false;
            }
            idx++;
        }
        return true;
    }
};