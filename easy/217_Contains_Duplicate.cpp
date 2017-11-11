class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     
        set<int> s;
        for(int i = 0; i<nums.size(); i++) {
            
            auto r = s.insert(nums[i]);
            if(r.second == false) return true;
            
        }
        return false;
        
    }
};
