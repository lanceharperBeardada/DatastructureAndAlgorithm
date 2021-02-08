/* 
给你一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？请你找出所有和为 0 且不重复的三元组。

注意：答案中不可以包含重复的三元组。

 

示例 1：

输入：nums = [-1,0,1,2,-1,-4]
输出：[[-1,-1,2],[-1,0,1]]
 */

/*
拿这个 nums 数组来举例，首先将数组排序，然后有一层 for 循环，i 从下表 0 的地方开始，同时定一个下表 left 定义在 i+1 的位置上，定义下表 right 在数组结尾的位置上。

依然还是在数组中找到 abc 使得 a + b +c =0，我们这里相当于 a = nums [i] b = nums [left] c = nums [right]。

接下来如何移动 left 和 right 呢， 如果 nums [i] + nums [left] + nums [right] > 0 就说明 此时三数之和大了，因为数组是排序后了，所以 right 下表就应该向左移动，这样才能让三数之和小一些。

如果 nums [i] + nums [left] + nums [right] < 0 说明 此时 三数之和小了，left 就向右移动，才能让三数之和大一些，直到 left 与 right 相遇为止。
*/

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {

    vector<vector<int>> result;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] > 0)
        return result;
      if (i > 0 && nums[i] == nums[i - 1])
        continue;
      int left = i + 1;
      int right = nums.size() - 1;
      while (right > left)
      {

        if (nums[i] + nums[left] + nums[right] > 0)
        {
          right--;
        }
        else if (nums[i] + nums[left] + nums[right] < 0)
        {
          left++;
        }
        else
        {
          result.push_back(vector<int>{nums[i], nums[left], nums[right]});
          while (right > left && nums[right] == nums[right - 1])
            right--;
          while (right > left && nums[left] == nums[left + 1])
            left++;
          right--;
          left++;
        }
      }
    }
    return result;
  }
};

int main()
{
  vector<int> a = {-1, 0, 1, 2, -1, -4};
  Solution c;
  vector<vector<int>> t = c.threeSum(a);
  for (auto b : t)
  {
    for(auto c:b){
      cout << c << " ";
    }
    cout << "\n";
  }
  return 0;
}