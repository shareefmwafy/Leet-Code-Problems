/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        while(true){
            
            if(head == nullptr)
                return false;

            if(head->val == -100)
                return true;

            head->val = -100;
            head = head->next;
            
        }

    }
};