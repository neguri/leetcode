class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        data = {}
        ls = 0
        ans = 0
        for i in range(len(s)):
            if data.get(s[i]) is None:
                ls +=1
                data[s[i]] = 1
            else:
                data.clear()
                data[s[i]] = 1
                ans = ans if ans > ls else ls
                ls = 1
        ans = ans if ans > ls else ls
        return ans

        
if __name__ == "__main__":
    assert Solution().lengthOfLongestSubstring("bbbbb") == 1
    assert Solution().lengthOfLongestSubstring("abcabc") == 3
    assert Solution().lengthOfLongestSubstring("pwwkew") == 3
    assert Solution().lengthOfLongestSubstring("aab") == 2