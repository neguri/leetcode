class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d = {}
        r = []
        for i in range(len(nums)):
            if d.get(target - nums[i]) is not None:
                r.append(d.get(target - nums[i]))
                r.append(i)
            else:
                d[nums[i]] = i
        return r

if __name__ == "__main__":
    assert Solution().twoSum([2, 7, 11, 15],9) == [0,1]        