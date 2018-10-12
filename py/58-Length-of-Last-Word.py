class Solution:
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        cnt  = 0
        one_word = True

        if len(s) is 0:
            return 0

        for i in range(len(s)):
            if s[i] == ' ':
                s[i] =''

        for i in range(len(s)):
            if s[i] is not ' ':
                cnt +=1
            else:
                cnt = 0
                one_word = False
        if one_word is True:
            cnt = 1

        return cnt

if __name__ == "__main__":
    assert Solution().lengthOfLastWord("Hello world") == 5
    assert Solution().lengthOfLastWord("Helloworld") == 1
    assert Solution().lengthOfLastWord("") == 0
    assert Solution().lengthOfLastWord("a ") == 1