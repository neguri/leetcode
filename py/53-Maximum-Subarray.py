class Solution:
    def _max(self, l, r):
        if l > r:
            return l
        else:
            return r

    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        lmax = nums[0]
        gmax = nums[0]

        for i in range(1, len(nums)):

            lmax = self._max(nums[i], lmax+nums[i])
            gmax = self._max(lmax,gmax)
        return gmax


if __name__ ==  "__main__":
    assert Solution().maxSubArray([-2,1,-3,4,-1,2,1,-5,4]) == 6