class Solution:
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: void Do not return anything, modify nums1 in-place instead.
        """

        if n == 0:
            return

        for i in range(m):
            if nums1[i] > nums2[0]:
                nums1[i], nums2[0] = nums2[0], nums1[i]
                nums2.sort()
        j = 0
        for i in range(m,len(nums1)):
            nums1[i], nums2[j] = nums2[j], nums1[i]
            j+=1
        print (nums1)
        return nums1


if __name__ == "__main__":
    assert Solution().merge([1,2,3,0,0,0,],3,[2,5,6],3) == [1,2,2,3,5,6]
    assert Solution().merge([0],0,[1],1) == [1]
    assert Solution().merge([1],1,[],0) == [1]