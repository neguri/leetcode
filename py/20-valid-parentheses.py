class Solution:
    
     def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """

        if len(s) %2 == 1:
            return False
        
        d = []
        for i in range(len(s)):
            if s[i] == '(' or s[i] == '[' or s[i] == '{':
                d.append(s[i])
            if s[i] == ')':
                if len(d) is 0:
                    return False

                if d.pop() is not '(':
                    return False

            if s[i] == ']':
                if len(d) is 0:
                    return False

                if d.pop() is not '[':
                    return False

            if s[i] == '}':
                if len(d) is 0:
                    return False

                if d.pop() is not '{':
                    return False
        if len(d) is 0:
            return True
        else:
            return False

s = Solution()
print (s.isValid("[]()"))
print (s.isValid("["))
print (s.isValid("]["))
print (s.isValid("(("))
print (s.isValid("{[}]"))