class Solution:
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """

        if len(needle) == 0:
            return 0
        
        if len(haystack) < len(needle):
            return -1

        for i in range(0, len(haystack)):
            if haystack[i] == needle[0]:
                idx = 0
                for _ in range(0,len(needle)):
                    
                    if(i+idx) >= len(haystack):
                        return -1

                    if(haystack[i+idx] != needle[idx]):
                        break
                    else:
                        idx +=1
                if idx == len(needle):
                    return i

        return -1



if __name__ == "__main__":
    assert Solution().strStr("Hello","ll") == 2
    assert Solution().strStr("aaaaa","bba") == -1
    assert Solution().strStr("Hello","") == 0
    assert Solution().strStr("aaa","aaaa") == -1
    assert Solution().strStr("bbaa","aab") == -1    
    assert Solution().strStr("mississippi","issip") == 4
