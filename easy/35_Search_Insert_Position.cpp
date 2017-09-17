#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    size_t n = nums.size();
    size_t i;
    for(i = 0; i<n;i++){
        if(nums[i] >= target)
          return i;
     }
    return i;
    }
};



int main()
{
  vector<int> v = {1,3,5,6};
  vector<int> f = {5,2,7,0};
  vector<int> r = {2,1,4,0};
  int result = 0;
  class Solution s;
  if((result=s.searchInsert(v,f[0])) == f[0]) cout<<"right"<<endl; else cout<<result<<endl;
  if((result=s.searchInsert(v,f[1])) == f[1]) cout<<"right"<<endl; else cout<<result<<endl;
  if((result=s.searchInsert(v,f[2])) == f[2]) cout<<"right"<<endl; else cout<<result<<endl;
  if((result=s.searchInsert(v,f[3])) == f[3]) cout<<"right"<<endl; else cout<<result<<endl;
  return 0;
}
