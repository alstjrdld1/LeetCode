#include <string.h>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret = "";
        string shortestStr = strs[0];
        for (auto str = strs.begin(); str != strs.end(); str++)
        {
            if (shortestStr.length() < str->length())
            {
                shortestStr = *str;
            }
        }
        
        for (int i = 0; i < shortestStr.length(); i++)
        {   
            bool ifMatch = true;
            for (int j = 0; j < strs.size(); j++)
            {
                if (shortestStr[i] != strs[j][i])
                {
                    ifMatch = false;
                    break;
                }
            }
            
            if (ifMatch)
            {
                ret += shortestStr[i];
            }
            else
            {
                break;
            }
        }
        
        return ret;
    }
};