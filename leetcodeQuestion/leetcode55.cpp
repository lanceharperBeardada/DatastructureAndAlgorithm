#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
      int n = nums.size();
      int mostLength = 0;
      for (int i = 0; i < n; i++)
      {
        if(i<=mostLength){
          mostLength = max(mostLength, i + nums[i]);
        }else
          return false;
      }
      return true;
    }
};