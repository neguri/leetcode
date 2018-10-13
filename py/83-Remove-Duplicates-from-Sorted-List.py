# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def traverse(self,node):
        while(node != None):
            print (node.val)
            node = node.next

    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None:
            return None
            
        rhead = head

        while(head.next != None):
            if head.val == head.next.val:
                if head.next.next != None:
                    head.next = head.next.next
                else:
                    head.next = None
            else:
                head = head.next
        
        self.traverse(rhead)

        return rhead

if __name__ == "__main__":
    head = ListNode(1)
    head.next = ListNode(1)
    head.next.next = ListNode(2)

    s = Solution()
    s.deleteDuplicates(head)
