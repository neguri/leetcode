class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int> um;
        
        for(int i = 0; i< nums.size(); i++) {
            um[nums[i]] += 1;
            if(um[nums[i]] > nums.size()/2) {
                return nums[i];
            } 
        }
        
    }
};
