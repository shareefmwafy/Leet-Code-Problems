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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = new ListNode();
        ListNode* curPrev = head;

        cur = head;

        while(cur != nullptr){
            if(cur->val == curPrev->val){
                curPrev->next = cur->next;
            }
            else{
                curPrev = curPrev->next;
            }
            cur = cur->next;
        }
        return head;
    }
};