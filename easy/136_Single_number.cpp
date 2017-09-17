class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
		int ret = nums[0];
		//cout << len << endl;
		for (int i = 1; i < len; i++) {
			ret = ret ^ nums[i];
		}
		return ret;
    }
};
