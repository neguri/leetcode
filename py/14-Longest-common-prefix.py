class Solution:
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        _min = 999
        r = []

        if len(strs) == 0:
            return ""

        if len(strs) == 1:
            _r = ''.join(strs)
            return _r
        
        for i in range(len(strs)):
            sz = len(strs[i])
            if( sz < _min):
                _min = sz

        for i in range(_min):
            c = strs[0][i]
            for j in range(len(strs)):
                if strs[j][i] != c:
                    _r = ''.join(r)
                    return _r
            r.append(strs[0][i])

        return ""

if __name__ == "__main__":
    assert Solution().longestCommonPrefix(["flower","flow","flight"]) == "fl"
    assert Solution().longestCommonPrefix(["dog","racecar","car"]) == ""
    assert Solution().longestCommonPrefix([]) == ""
    assert Solution().longestCommonPrefix(["a"]) == "a"
    assert Solution().longestCommonPrefix(["c","c"]) == "c"
"""
Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
"""  