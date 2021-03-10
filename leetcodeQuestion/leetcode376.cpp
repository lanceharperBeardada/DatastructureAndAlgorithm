#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
      if(nums.empty()){
          return 0;
      }
      int state;
      int begin = 0;
      int down = -1;
      int up = 1;
      state = begin;
      int sum = 1;
      for (int i = 1; i < nums.size(); i++)
      {
        if(nums[i]==nums[i-1]){
          continue;
        }
        else if (nums[i] > nums[i - 1] && state != up)
        {
          state = up;
          sum++;
        }
        else if (nums[i] < nums[i - 1] && state != down)
        {
          state = down;
          sum++;
        }
      }
      return sum;
    }
};