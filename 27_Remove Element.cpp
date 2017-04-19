class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n = nums.size();
        nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
        int _n = nums.size();
        return _n;
    }
};