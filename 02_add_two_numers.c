/**
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     struct ListNode *next;
 *      * };
 *       */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	    
	    
	    struct ListNode* retNode = NULL;
	    struct ListNode* node1 = l1;
	    struct ListNode* node2 = l2;
	    struct ListNode* head = NULL;
	    int carry = 0;
	    int n1 = 0;
	    int n2 = 0;
								    
	    while(node1 != NULL || node2 != NULL)
	    {
									    
	        if(retNode == NULL)
	        {
	            retNode = (struct ListNode*)malloc(sizeof(struct ListNode));
	            retNode->next = NULL;
	            retNode->val =0;
	            head = retNode;
	        }
	        else if(retNode->next == NULL)
	        {
	            retNode->next = (struct ListNode*)malloc(sizeof(struct ListNode));
	            retNode = retNode->next;
	        }
											        
	        if(node1 != NULL)
		          n1 = node1->val;
	        else 
		          n1 = 0;
																				        
	        if(node2 != NULL)
		          n2 = node2->val;
	        else 
		          n2 = 0;
																								        
																								        
	        retNode->val = (n1 + n2)%10 + carry;
																										        
	        if( (n1 + n2) >=10)
		        carry = 1;
	        else
		        carry = 0;

//   printf("%d %d %d\n", n1, n2, retNode->val);
           if(node1!= NULL)
		     node1 = node1->next;
		   if(node2!=NULL)
		     node2 = node2->next;
																															 }
			
		   return retNode = head;
		}
