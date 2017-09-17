class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {
		
		size_t size = nums.size();
		int max = 0;
		int p = 0;

		for (int i = 0; i < size; i++) {
			if (nums[i] == 1) {
				++p;
			}
			else {
				if (p > max) {
					max = p;
					//p = 0;
				}
                p = 0;
			}
		}
        if(p>max) max = p;
		return max;
	}
};
