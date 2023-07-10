/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ansPtr = new ListNode();
        ListNode* ans = new ListNode();
        
        ansPtr->next = ans;
        int overFlow = 0;
        
        while(l1 != nullptr && l2 != nullptr){
            int val = l1->val + l2->val + overFlow;
            overFlow = val / 10;
            val = val % 10;
            
            ListNode* newOne = new ListNode(val);
            ans->next = newOne;
            ans = newOne;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1 != nullptr){
            int val = l1->val + overFlow;
            overFlow = val / 10;
            val = val % 10;
            
            ListNode* newOne = new ListNode(val);
            ans->next = newOne;
            ans = newOne;
            l1 = l1->next;
        }
        
        while(l2 != nullptr){
            int val = l2->val + overFlow;
            overFlow = val / 10;
            val = val % 10;
            
            ListNode* newOne = new ListNode(val);
            ans->next = newOne;
            ans = newOne;
            l2 = l2->next;
        }
        
        if(overFlow != 0){
            ListNode* newOne = new ListNode(overFlow);
            ans->next = newOne;
        }
        
        return ansPtr->next->next;
    }
};