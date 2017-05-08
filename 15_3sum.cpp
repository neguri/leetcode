class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
//      vector<vector<int>> v = {{-1,0,1},{-1,-1,2}};
      vector<int> inner;
      vector<vector<int>> outer;

      vector<int> _s_inner;
      vector<vector<int>> _s_outer;

      int n = nums.size();
      for(int i = 0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
          for(int k=j+1; k<n; k++){
              if((nums[i] + nums[j] + nums[k]) == 0) {
                inner.push_back(nums[i]);
                inner.push_back(nums[j]);
                inner.push_back(nums[k]);

                _s_inner = inner;
                sort(_s_inner.begin(),_s_inner.end());
                auto result = find(_s_outer.begin(), _s_outer.end(), _s_inner);
                if(result == _s_outer.end()) {
                  _s_outer.push_back(_s_inner);
                 // outer.push_back(inner);
                }

                inner.clear();
                //_s_inner.clear();
              }
          }
        }
      }
      return _s_outer;
    }
};