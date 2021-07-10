#### [16. 最接近的三数之和](https://leetcode-cn.com/problems/3sum-closest/)

难度中等817收藏分享切换为英文接收动态反馈

给定一个包括 *n* 个整数的数组 `nums` 和 一个目标值 `target`。找出 `nums` 中的三个整数，使得它们的和与 `target` 最接近。返回这三个数的和。假定每组输入只存在唯一答案。

 

**示例：**

```java
输入：nums = [-1,2,1,-4], target = 1
输出：2
解释：与 target 最接近的和是 2 (-1 + 2 + 1 = 2) 。
```

## 题解

使用双指针解题,

令两个指针 j ， k 指向 i 的后一位，与数组结尾位置。

比结果大就令 k-- ,比结果小就让 j++，实现结果的一个逼近。选择最接近结果的值。



```java
class Solution {
    public int threeSumClosest(int[] nums, int target) {
        int len = nums.length;
        Arrays.sort(nums);
        int closeSum = nums[0]+nums[1]+nums[2];

        for(int i=0;i<len;i++){
            int j=i+1;
            int k=len-1;
            while(j<k){
                int threeSum = nums[i]+nums[j]+nums[k];
                if(Math.abs(target-threeSum)<Math.abs(target-closeSum)){
                    closeSum = threeSum;
                }
                if(threeSum==target){
                    return closeSum;
                }
                else if(threeSum<target){
                    j++;
                }else if(threeSum>target){
                    k--;
                }
            }
        }
        return closeSum;
    }
}
```

