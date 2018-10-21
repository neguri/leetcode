class Solution:
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        l = []
        for i in range(len(s)):
            if (s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z') or (s1[i] >= '0' and s1[i] <='9'):
                l.append(s[i])
        
        s1 = ''.join(l)
        s2 = s1[::-1]
        print(s1)
        print(s2)
        if len(s1) <= 1:
            return True
        if s1.lower() == s2.lower():
            return True
        else:
            return False

if __name__ == "__main__":
    assert Solution().isPalindrome("A man, a plan, a canal: Panama") == True
    assert Solution().isPalindrome("race a car") == False
    assert Solution().isPalindrome("0P") == False
    assert Solution().isPalindrome("") == True