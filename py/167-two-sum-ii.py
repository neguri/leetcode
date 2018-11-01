class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        i = 0
        j = len(numbers) - 1

        while(numbers[i] + numbers[j] != target):
            if numbers[i] + numbers[j] > target:
                j -=1
            else:
                i +=1
        return [i+1, j+1]


if __name__ == "__main__":
    assert Solution().twoSum([2,7,11,15],9) == [1,2]
    assert Solution().twoSum([2,7,11,15],1) == []
    assert Solution().twoSum([],1) == []    