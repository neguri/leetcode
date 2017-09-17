/**
 *  * Note: The returned array must be malloced, assume caller calls free().
 *   */
int* twoSum(int* nums, int numsSize, int target) {
  int i = 0;
  int j = 0;
  int *ret_val = (int*)malloc(sizeof(int)*2);
  for(i=0;i<numsSize;i++)
  {
    for(j=i+1;j<numsSize;j++)
    {
       if(nums[i] + nums[j] == target)
       {
           ret_val[0] = i;
           ret_val[1] = j;
           break;
       }
    }
  }
 return ret_val;
}
