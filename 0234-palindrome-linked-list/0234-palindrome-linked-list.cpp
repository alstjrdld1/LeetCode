/*
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
*/

#include <vector>
using namespace std;

class Solution {
    
public:
    bool isPalindrome(ListNode* head) {
        vector<int> values;
        
        while(true){
            values.push_back(head->val);
            head = head->next;
            if(head == nullptr){
                break;
            }
        }
        
        for(int i =0; i < values.size()/2; i++){
            if(values[i] != values[values.size() - 1 - i]){
                return false;
            }    
        }
        return true;
    }
};