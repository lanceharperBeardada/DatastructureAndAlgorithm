/* 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。

每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

注意：给定 n 是一个正整数。 */

class Solution {
public:
    int climbStairs(int n) {
        int x=0,y=0,z=1;
        for(int i=0;i<n;i++){
            x=y;
            y=z;
            z=x+y;
        }
        return z;
    }
};