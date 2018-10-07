class Solution:
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        idx = 0
        for _ in range(0,len(nums)):
            if nums[idx] == val:
                del nums[idx]
            else:
                idx +=1
        
        return len(nums)


if __name__ == "__main__":
    s = Solution()
    assert s.removeElement([1,2,2,1],2) == 2
    assert s.removeElement([0,1,2,2,3,0,4,2],2) == 5