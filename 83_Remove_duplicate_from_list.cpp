/*
 Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */



class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* _cur = head;
        
        while(_cur != NULL) {
            
            while( _cur->next!= NULL&& _cur->val == _cur->next->val) {
                _cur->next = _cur->next->next;
            }
            _cur = _cur->next;
        }
        return head;
    }
};
