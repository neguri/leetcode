class Solution:
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        d = (65535+1) * [None]
        d[0] = 0
        d[1] = 1
        d[2] = 2

        for i in range(3,n+1):
            d[i] = d[i-1] + d[i-2]
        return d[n] 

if __name__ == "__main__":
    assert Solution().climbStairs(3) == 3
    assert Solution().climbStairs(1) == 1
    assert Solution().climbStairs(2) == 2