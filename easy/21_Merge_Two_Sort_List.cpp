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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
     
        ListNode* m = NULL;
        ListNode* c = NULL;
        
        while(l1 != NULL && l2 != NULL) {
            if(l1->val < l2->val) {
                if(m == NULL){
                 m = l1;
                 c = l1;
                 l1 = l1->next;
                }else {
                 c->next = l1;
                 c = c->next;
                 l1 = l1->next;
                }
            }else{
                if(m == NULL){
                    m = l2;
                    c = l2;
                    l2 = l2->next;
                }else{
                 c->next =l2;
                 c = c->next;
                 l2 = l2->next;
                }
            }
        }
        
        while(l1 != NULL) {
            
            if(m == NULL) {m = l1; c = l1; l1 = l1->next;} else {
            
            c->next = l1;
            c = c->next;
            l1 = l1->next; }
        }
        
        
        while(l2 != NULL) {
            if(m == NULL) {m = l2; c = l2; l2 = l2->next;} else {

            c->next = l2;
            c = c->next;
            l2 = l2->next;}
        }
        
        return m;
    }
};
