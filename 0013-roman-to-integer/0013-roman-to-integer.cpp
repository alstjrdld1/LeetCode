#include <map> 
#include <stack>
using namespace std;

class Solution {
private:
    stack<int> myStack;
public:
    int romanToInt(string s) {
        map<char, int> symbols;
        symbols['I'] = 1;
        symbols['V'] = 5;
        symbols['X'] = 10;
        symbols['L'] = 50;
        symbols['C'] = 100;
        symbols['D'] = 500;
        symbols['M'] = 1000;
        
        int sSize = s.length();
        int result = 0;
        
        for(int i =0; i < sSize; i++){
            int count = 3;
            if(s[i] == 'V' || s[i] == 'X'){
                while(!(myStack.empty()) && myStack.top() == 'I' && count > 0){
                    result -= symbols[myStack.top()];
                    myStack.pop();
                    count--;
                }
            }
            else if(s[i] == 'L' || s[i] == 'C'){
                while(!(myStack.empty()) && myStack.top() == 'X' && count > 0){
                    result -= symbols[myStack.top()];
                    myStack.pop();
                    count--;
                }
            }
            else if(s[i] == 'D' || s[i] == 'M'){
                while(!(myStack.empty()) && myStack.top() == 'C' && count > 0){
                    result -= symbols[myStack.top()];
                    myStack.pop();
                    count--;
                }
            }
            myStack.push(s[i]);
            
        }
        
        while(!myStack.empty()){
            result += symbols[myStack.top()];
            myStack.pop();
        }

        return result;
    }
};