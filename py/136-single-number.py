class Solution:
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        for i in range(0,len(nums)//2):
            if nums[i*2] != nums[i*2+1]:
                return nums[i*2]
        return  nums[len(nums)-1]
    
    def singleNumbers(self, nums):
        k = 0
        for i in range(len(nums)):
            k = k^nums[i]
        return k


if __name__ == "__main__":
    assert Solution().singleNumber([2,2,1]) == 1
    assert Solution().singleNumber([4,1,2,1,2]) == 4
    assert Solution().singleNumber([17,12,5,-6,12,4,17,-5,2,-3,2,4,5,16,-3,-4,15,15,-4,-5,-6]) == 16
    assert Solution().singleNumbers([17,12,5,-6,12,4,17,-5,2,-3,2,4,5,16,-3,-4,15,15,-4,-5,-6]) == 16