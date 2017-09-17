class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        size_t n = nums.size();
        size_t i=0;
        size_t count = 0;
        while(i<n-1) {
            if(nums[i] == nums[i+1]) count++;
            i++;
        }
        return n - count;
    }
};
