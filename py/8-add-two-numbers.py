# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """

        n1 = 0
        n2 = 0

        while(l1 is not None):
            n1 *= 10
            n1 += l1.val
            l1 = l1.next

        while(l2 is not None):
            n2 *= 10
            n2 += l2.val
            l2 = l2.next

        sum = n1+n2

        print(n1,n2,sum)
        
        r = ListNode(sum%10)
        head = r

        sum = sum //10

        while sum is not 0:
            s = sum%10
            r.next = ListNode(s)
            r = r.next
            sum = sum//10

        while head is not None:
            print (head.val)
            head = head.next



if __name__ == "__main__":
    
    n1 = ListNode(1)
    n1.next = ListNode(8)

    n2 = ListNode(0)

    Solution().addTwoNumbers(n1, n2)