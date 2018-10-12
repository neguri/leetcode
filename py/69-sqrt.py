import math

class Solution:
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        r = math.sqrt(x)
        r = int(r//1)
        return r
        
if __name__ == "__main__":
    assert Solution().mySqrt(8) == 2