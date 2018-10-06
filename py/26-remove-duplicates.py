class Solution:
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        dup = 0
        if len(nums) is 0:
            return 0
        i = 1

        for _ in range(1, len(nums)):
            if nums[i] == nums[i-1]:
                del nums[i]
            else:
                i +=1
        return i

"""
        nn = []
        nn.append(nums[0])


        for i in range(1,len(nums)):
            if nums[i] != nn[len(nn)-1]:
                nn.append(nums[i])
        return len(nn)
"""

if __name__ == "__main__":
    assert Solution().removeDuplicates([1, 1, 2, 3, 5, 5]) == 4
    assert Solution().removeDuplicates([]) == 0