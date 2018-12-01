class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if(len(nums)) == 0:
            return 0

        if(len(nums)) == 1:
            return nums[0]
        
        if(len(nums)) == 2:
            if nums[0] > nums[1]:
                return nums[0]
            else:
                return nums[1]


        d = [None]*1000
        d[0] = nums[0]
        if nums[1] > nums[0]:
            d[1] = nums[1]
        else:
            d[1] = nums[0]

        for i in range(2,len(nums)):
            if d[i-1] > d[i-2] + nums[i]:
                d[i] = d[i-1]
            else:
                d[i] = d[i-2] + nums[i]
        return d[len(nums)-1]

if __name__ == "__main__":
    assert Solution().rob([1,2,3,1]) == 4
    assert Solution().rob([2,7,9,3,1]) == 12
    assert Solution().rob([2]) == 2
    assert Solution().rob([2,3]) == 3
    assert Solution().rob([]) == 0
    assert Solution().rob([1,2,3]) == 4 
    assert Solution().rob([2,1]) == 2
    assert Solution().rob([2,1,1,2]) == 4  