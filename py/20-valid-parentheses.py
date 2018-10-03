class Solution:
    
    def __init__(self):
        self.idx = 0
        self.l = []


    def push(self, a):
        self.idx +=1
        self.l[self.idx] = a
        self.idx +=1
    def pop(self):
        self.idx -= 1
        r = [self.idx]
        return r

    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """


s = Solution()
s.push(1)
s.push(2)
print(s.pop())
print(s.pop())
