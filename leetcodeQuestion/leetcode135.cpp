/*
老师想给孩子们分发糖果，有 N 个孩子站成了一条直线，老师会根据每个孩子的表现，预先给他们评分。

你需要按照以下要求，帮助老师给这些孩子分发糖果：

每个孩子至少分配到 1 个糖果。
评分更高的孩子必须比他两侧的邻位孩子获得更多的糖果。
那么这样下来，老师至少需要准备多少颗糖果呢？

 

示例 1：

输入：[1,0,2]
输出：5
解释：你可以分别给这三个孩子分发 2、1、2 颗糖果。
*/

/*
把所有孩子的糖果数初始化为 1； 先从左往右遍历一遍，如果右边孩子的评分比左边的高，则右边孩子的糖果数更新为左边孩子的 糖果数加 1；再从右往左遍历一遍，如果左边孩子的评分比右边的高，且左边孩子当前的糖果数 不大于右边孩子的糖果数，则左边孩子的糖果数更新为右边孩子的糖果数加 1。通过这两次遍历， 分配的糖果就可以满足题目要求了。这里的贪心策略即为，在每次遍历中，只考虑并更新相邻一 侧的大小关系。
*/

class Solution {
public:
    int candy(vector<int>& ratings) {
        int nums = ratings.size();
        vector<int> candyNums(nums, 1);
        if(nums<2){
            return nums;
        }
        for(int i=0;i<nums-1;i++){
            if(ratings[i]<ratings[i+1]){
                candyNums[i+1]= candyNums[i]+1;
            }
        }
        for(int i=nums-1;i>0;i--){
            if(ratings[i-1]>ratings[i] && candyNums[i-1]<=candyNums[i]){
                candyNums[i-1]=candyNums[i]+1;
            }
        }
        int sums = 0;
        for(auto c:candyNums){
            sums+=c;
        }
        return sums;
    }
};