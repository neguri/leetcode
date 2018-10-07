class Solution:
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        for i in range(len(nums)):

            if target <= nums[i]:
                return i

        return len(nums)


if __name__ == "__main__":
    assert Solution().searchInsert([1,3,5,6], 5) == 2
    assert Solution().searchInsert([1,3,5,6], 2) == 1
    assert Solution().searchInsert([1,3,5,6], 7) == 4
    assert Solution().searchInsert([1,3,5,6], 0) == 0
    assert Solution().searchInsert([-5,-4,-3,-2,-1,0,1,2,3,5], 4) == 9

