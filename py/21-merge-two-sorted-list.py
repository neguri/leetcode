# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        rtype = tail =  ListNode(0)


        while l1 is not None and l2 is not None:
            if l1.val < l2.val:
                tail.next, l1 = l1, l1.next
            else:
                tail.next, l2 = l2, l2.next
            tail = tail.next
        
        tail.next = l1 or l2

        return rtype.next


l1 = ListNode(1)
l1.next = ListNode(2)
l1.next.next = ListNode(4)


l2 = ListNode(1)
l2.next = ListNode(3)
l2.next.next = ListNode(4)


def traverse(node):
    while node is not None:
        print(node.val, end=' ')
        node = node.next

#traverse(l1)
#traverse(l2)

#print("-----------------")
sol = Solution()
r = sol.mergeTwoLists(l1,l2)
traverse(r)