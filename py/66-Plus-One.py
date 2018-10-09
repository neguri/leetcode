class Solution:
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        s = int( ''.join(str(e) for e in digits)) + 1
        r = [int (e) for e in str(s)]
        return r


if __name__ == "__main__":
    assert Solution().plusOne([4,3,2,1]) == [4,3,2,2]