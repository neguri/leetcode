class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        
        vector<int> out;
        
        for(int i = 0; i<findNums.size(); i++) {
            
            auto r = find(nums.begin(), nums.end(),findNums[i]);
            
            for(r; r < nums.end(); r++) {
                
                if(*r > findNums[i]) {
                    out.push_back(*r);
                    break;
                }
                    
            }
            if(r == nums.end()) out.push_back(-1);
        }
        return out;
    }
};
