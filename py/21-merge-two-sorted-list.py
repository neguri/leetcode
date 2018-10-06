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
        r = ListNode(0)
        rtype = r

        while l1 is not None and l2 is not None:
            if l1.val < l2.val:
                if r is None:
                    r = l1
                    rtype = r
                else:
                    r.next = l1
                    r = r.next
                l1 = l1.next
            else:
                if r is None:
                    r = l2
                    rtype =r
                else:
                    r.next= l2
                    r = r.next
                l2 = l2.next
        if l1 is None:
            r.next = l2
        else:
            r.next = l1
        rtype = rtype.next
        return rtype


l1 = ListNode(1)
l1.next = ListNode(2)
l1.next.next = ListNode(4)


l2 = ListNode(1)
l2.next = ListNode(3)
l2.next.next = ListNode(4)


def traverse(node):
    while node is not None:
        print (node.val)
        node = node.next

traverse(l1)
traverse(l2)

print("-----------------")
sol = Solution()
r = sol.mergeTwoLists(l1,l2)
traverse(r)