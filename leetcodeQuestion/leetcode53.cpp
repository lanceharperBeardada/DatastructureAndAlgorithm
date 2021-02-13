/* 给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

 

示例 1：

输入：nums = [-2,1,-3,4,-1,2,1,-5,4]
输出：6
解释：连续子数组 [4,-1,2,1] 的和最大，为 6 。 */

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int>& nums) {
      vector<int> subArray(nums.size(), 0);
      int maxSum = nums[0];
      subArray[0] = nums[0];
      for (int i=1;i<nums.size();i++){
        subArray[i] = max(subArray[i - 1] + nums[i], nums[i]);
        maxSum = max(maxSum, subArray[i]);
      }
      return maxSum;

    }
};