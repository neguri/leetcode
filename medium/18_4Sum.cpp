lass Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    
    vector<vector<int>> vvi;  
      
      size_t s = nums.size();
      for(int i = 0; i<s; i++) {
        for(int j = i +1; j<s; j++) {
          for(int k = j+1; k < s; k++) {
            for(int l = k +1; l < s; l++) {
              
            
              if(nums[i] + nums[j] + nums [k] + nums[l] == target) {
                vector<int> v; 
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                v.push_back(nums[k]);
                v.push_back(nums[l]);
               
                sort(v.begin(),v.end()); 
                
                auto r = find(vvi.begin(), vvi.end(), v)  ;
                if(r == vvi.end())  vvi.push_back(v);
                
              }
            }
          }
        }
      }  
      return vvi; 
    }
};
