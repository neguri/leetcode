class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 0:
            return 0
        c = 1
        while n != 1 :
            if n % 2 == 1:
                c +=1
            n = n//2
        return c

if __name__ == "__main__":
    assert Solution().hammingWeight(11) == 3
    assert Solution().hammingWeight(128) == 1
    assert Solution().hammingWeight(0) == 0
    assert Solution().hammingWeight(1)  == 1