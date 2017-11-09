class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        std::sort(nums.begin(), nums.end());
        int last = nums[nums.size()-1];
        
        if(nums.size() == 1) {
            if(last == 0) return 1;
            if(last ==1) return 0;
        }
              
        for(auto a : nums) {
            sum1 +=a;
        }
       
        sum2 = last + (last * (last -1))/2;
        
        if(sum1 == sum2 && nums[0] != 0) return 0;
        else if((sum2 - sum1) > 0) return sum2-sum1;
        else return last +1;
    }
};
